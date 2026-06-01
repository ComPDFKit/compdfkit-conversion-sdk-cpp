#ifndef LIBRARY_MANAGER_H
#define LIBRARY_MANAGER_H

#include "base_type.h"
#include "com_config_macros.h"

#include <cstdint>

namespace compdf {
namespace common    {

/// Brief Converts blue license error code to SDK ErrorCode.
base::ErrorCode ConvertBlueErrorcode(int error_code);

/// \class LibraryManager
/// \brief Manages all operations related to the SDK library.
///
/// The `LibraryManager` class serves as a central hub for managing the lifecycle of an SDK library. It provides
/// functionalities such as initializing the library with specified resources, verifying licenses, installing fonts,
/// setting up logging and progress callbacks, retrieving version information, and counting pages in documents.
class COMPDFKIT_DECL LibraryManager
{
public:
    /// \brief Verifies the provided license key along with device ID and application ID.
    ///
    /// \param[in] license The license key string to be verified.
    /// \param[in] device_id A unique identifier for the device.
    /// \param[in] app_id An identifier for the application using the SDK.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the verification process.
    static base::ErrorCode LicenseVerify(const char* license, const char* device_id, const char* app_id);

    /// \brief Initializes the SDK library with the given resource path as a C-string.
    ///
    /// This method should be called before any other SDK function is invoked.
    /// \param[in] resource_path Path to the resources needed by the SDK.
    static void Initialize(const char* resource_path);
    /// \brief Initializes the SDK library with the given resource path as a wide-character string.
    ///
    /// This method should be called before any other SDK function is invoked.
    /// \param[in] resource_path Path to the resources needed by the SDK.
    static void Initialize(const wchar_t* resource_path);

    /// \brief Releases all resources used by the library. Should be called when the SDK is no longer needed.
    static void Release();

    /// \brief Enables or disables logging for info and warning messages.
    ///
    /// \param[in] enable_info True if info messages should be logged; false otherwise.
    /// \param[in] enable_warning True if warning messages should be logged; false otherwise.
    static void SetLogger(bool enable_info, bool enable_warning);

    /// \brief Gets the version of the SDK library.
    ///
    /// \param[out] version A pre-allocated buffer where the version string will be copied.
    static void GetVersion(char* version);

    /// \brief Returns the number of pages in a document.
    ///
    /// \param[in] file_path Path to the document file.
    /// \param[in] password Password for opening the document (if required).
    /// \return The total number of pages in the document.
    static int GetPageCount(const char* file_path, const char* password);

    /// \brief Returns the remaining page quota.
    /// \return >= 0: actual remaining pages, -1: not initialized,
    ///         -2: unlimited, -3: quota file corrupted.
    static int32_t GetRemainingPageQuota();

    /// \brief Returns the number of pages in a document.
    ///
    /// \param[in] file_path Path to the document file as a wide-character string.
    /// \param[in] password Password for opening the document (if required) as a wide-character string.
    /// \return The total number of pages in the document.
    static int GetPageCount(const wchar_t* file_path, const wchar_t* password);

    /// \brief Sets the Document AI model based on the provided file path.
    ///
    /// \param[in] file_path Path to the Document AI model file.
    /// \param[in] gpu_id Which GPU to use for the AI model. -1 means disable GPU.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of setting the model.
    static base::ErrorCode SetDocumentAIModel(const char* file_path, int gpu_id = -1);

    /// \brief Sets the number of AI models for layout analysis and table recognition.
    ///
    /// \param[in] layout_model_count Number of layout analysis models to be used.
    /// \param[in] table_model_count Number of table recognition models to be used.
    static void SetDocumentAIModelCount(int layout_model_count, int table_model_count);

    /// \brief Releases the memory used by the AI model. If you want to use the AI function again after this call, you need to call \link LibraryManager::SetDocumentAIModel \endlink again.
    static void ReleaseDocumentAIModel();

    /// \brief Sets the Document AI model based on the provided file path as a wide-character string.
    ///
    /// \param[in] file_path Path to the Document AI model file as a wide-character string.
    /// \param[in] gpu_id Which GPU to use for the AI model. -1 means disable GPU.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of setting the model.
    static base::ErrorCode SetDocumentAIModel(const wchar_t* file_path, int gpu_id = -1);

private:
    LibraryManager() = default;
    LibraryManager(const LibraryManager&) = default;
};

}
}

#endif //LIBRARY_MANAGER_H
