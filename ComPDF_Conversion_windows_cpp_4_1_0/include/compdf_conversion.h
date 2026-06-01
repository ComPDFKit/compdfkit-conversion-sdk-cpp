#ifndef COMPDFKIT_CONVERSION_H
#define COMPDFKIT_CONVERSION_H

#include "library_manager.h"

namespace compdf {
namespace conversion{

/// \class CPDFConversion
/// \brief Provides functionalities to convert PDF files into various formats such as Word, Excel, PPT, HTML, etc.
class COMPDFKIT_DECL CPDFConversion
{
public:
    /// \brief Starts the conversion of a PDF file to a Word document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToWord(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a Word document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToWord(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

     /// \brief Starts the conversion of a PDF file to an Excel document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToExcel(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to an Excel document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToExcel(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to a PowerPoint presentation.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToPpt(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a PowerPoint presentation using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToPpt(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to an HTML document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToHtml(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to an HTML document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToHtml(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to an image format.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file(s).
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToImage(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to an image format using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file(s) as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToImage(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to a Markdown document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToMarkdown(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a Markdown document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToMarkdown(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to an RTF document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToRtf(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to an RTF document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToRtf(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to a plain text file.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToTxt(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a plain text file using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToTxt(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to a JSON file.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToJson(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a JSON file using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToJson(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to a searchable PDF.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToSearchablePdf(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to a searchable PDF using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToSearchablePdf(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);

    /// \brief Starts the conversion of a PDF file to an OFD document.
    ///
    /// \param[in] file_path The input PDF file path.
    /// \param[in] password Password for opening the PDF file (if required).
    /// \param[in] output_path The output path of the converted file.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToOfd(const char* file_path, const char* password, const char* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
    /// \brief Starts the conversion of a PDF file to an OFD document using wide-character strings.
    ///
    /// \param[in] file_path The input PDF file path as a wide-character string.
    /// \param[in] password Password for opening the PDF file (if required) as a wide-character string.
    /// \param[in] output_path The output path of the converted file as a wide-character string.
    /// \param[in] options \link base::ConvertOptions \endlink for conversion settings.
    /// \param[in] callback Optional callback for tracking conversion progress and controlling cancellation.
    /// \return \link base::ErrorCode \endlink indicating the success or failure of the operation.
    static base::ErrorCode StartPDFToOfd(const wchar_t* file_path, const wchar_t* password, const wchar_t* output_path, const base::ConvertOptions& options, CConvertCallback* callback = nullptr);
};

}
}

#endif //COMPDFKIT_CONVERSION_H
