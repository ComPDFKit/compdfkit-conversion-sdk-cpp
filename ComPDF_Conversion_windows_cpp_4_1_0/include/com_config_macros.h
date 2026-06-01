#ifndef COM_CONFIG_MACROS_H_
#define COM_CONFIG_MACROS_H_

#include <stdbool.h>

#if defined(_WIN32)
#if defined(COMPDF_LIB)
#define COMPDFKIT_DECL __declspec(dllexport)
#else
#define COMPDFKIT_DECL __declspec(dllimport)
#endif
#else
#define COMPDFKIT_DECL __attribute__((visibility("default")))
#endif  // _WIN32

/// \brief Trigger: SDK saves page image to temp file, calls this to request external OCR.
/// \param[in] image_path Path to the temporary image file (PNG format).
/// \return true on success, false on failure.
typedef bool (*COCRCallback)(const char* image_path);

/// \brief Trigger: Request external layout analysis on the image.
/// \param[in] image_path Path to the temporary image file (PNG format).
/// \return true on success, false on failure.
typedef bool (*CLayoutCallback)(const char* image_path);

/// \brief Trigger: Request external table recognition on the image.
/// \param[in] image_path Path to the temporary image file (PNG format).
/// \return true on success, false on failure.
typedef bool (*CTableCallback)(const char* image_path);

/// \brief Getter: Retrieve OCR result as a JSON string.
/// The returned pointer must remain valid until the next call to this callback.
/// \return JSON string on success, NULL on failure.
typedef const char* (*CGetOCRResultCallback)();

/// \brief Getter: Retrieve layout analysis result as a JSON string.
/// The returned pointer must remain valid until the next call to this callback.
/// \return JSON string on success, NULL on failure.
typedef const char* (*CGetLayoutResultCallback)();

/// \brief Getter: Retrieve table recognition result as a JSON string.
/// The returned pointer must remain valid until the next call to this callback.
/// \return JSON string on success, NULL on failure.
typedef const char* (*CGetTableResultCallback)();

/// \brief A callback function type for tracking the progress of a conversion process.
///
/// This callback is designed to be used during operations that involve processing multiple pages,
/// such as converting a document from one format to another. It provides updates on the current page being processed
/// and the total number of pages in the document, allowing for the display or logging of progress.
///
/// \param[in] current_page The page number that is currently being processed. This value starts at 1 for the first page.
/// \param[in] total_page The total number of pages in the document being processed.
typedef void (*CProgress)(int current_page, int total_page);

/// \brief A callback function type for cancellation.
///
/// The conversion pipeline may call this function periodically. Returning true indicates
/// the caller requests the current operation to cancel/abort as soon as possible.
///
/// \return True to request cancellation; false to continue.
typedef bool (*CCancel)();

/// \brief A generic handle type for managing various operations.
typedef void* COMHANDLE;

/// \brief A callback bundle used to report conversion progress back to the caller.
///
/// This struct groups the user-provided context (\ref handle), an optional cancellation
/// checker (\ref cancel), and the progress notifier function (\ref progress).
/// It is typically passed through the conversion pipeline so the implementation can
/// invoke these callbacks periodically.
typedef struct CConvertCallback {
    /// \brief Opaque user/context handle passed back to the callback.
    COMHANDLE handle;

    /// \brief Optional cancellation callback.
    ///
    /// If provided (non-null), returning true requests the conversion to stop early.
    CCancel cancel;

    /// \brief Progress callback function invoked during conversion.
    CProgress progress;

    /// \brief External custom AI callbacks (all default to NULL).
    COCRCallback ocr;
    CLayoutCallback layout;
    CTableCallback table;
    CGetOCRResultCallback get_ocr_result;
    CGetLayoutResultCallback get_layout_result;
    CGetTableResultCallback get_table_result;
} CConvertCallback;

#endif  // COM_CONFIG_MACROS_H_