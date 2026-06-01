#ifndef BASE_TYPE_H
#define BASE_TYPE_H

namespace compdf {
namespace base   {

/// \brief OCR language.
enum class OCRLanguage{
    /// Unknown language.
    e_UNKNOWN = 0,
    /// Chinese (Simplified).
    e_Chinese,
    /// Chinese (Traditional).
    e_ChineseTra,
    /// English.
    e_English,
    /// Korean.
    e_Korean,
    /// Japanese.
    e_Japanese,
    /// Latin.
    e_Latin,
    /// Devanagari.
    e_Devanagari,
    /// Cyrillic.
    e_Cyrillic,
    /// Arabic.
    e_Arabic,
    /// Tamil.
    e_Tamil,
    /// Telugu.
    e_Telugu,
    /// Kannada.
    e_Kannada,
    /// Thai.
    e_Thai,
    /// Greek.
    e_Greek,
    /// Eslav.
    e_Eslav,
    /// Automatically select language.
    e_Auto
};

/// \brief Error code.
enum class ErrorCode
{
    /// Success, and no error occurs.
    e_ErrSuccess = 0,
    /// Conversion process was canceled.
    e_ErrCancel = 1,
    /// File cannot be found or could not be opened.
    e_ErrFile = 2,
    /// Invalid password. Usually, this error may occur when loading a PDF document with password. When meet this, user should load document again with correct password.
    e_ErrPDFPassword = 3,
    /// PDF page failed to load.
    e_ErrPDFPage = 4,
    /// Format is invalid. For files, this may also mean that file is corrupted.
    e_ErrPDFFormat = 5,
    /// PDF document is encrypted by some unsupported security handler.
    e_ErrPDFSecurity = 6,
    /// Out-of-memory error occurs.
    e_ErrOutOfMemory = 7,
    /// System I/O error.
    e_ErrIO = 8,
    /// Folder compression failed.
    e_ErrCompress = 9,

    /// The license is invalid
    e_ErrLicenseInvalid = 20,
    /// The license has expired
    e_ErrLicenseExpire = 21,
    /// The license does not support the current platform
    e_ErrLicenseUnsupportedPlatform = 22,
    /// The license does not support the application id
    e_ErrLicenseUnsupportedID = 23,
    /// The license does not support the device id
    e_ErrLicenseUnsupportedDevice = 24,
    /// The license does not have the function permission
    e_ErrLicensePermissionDeny = 25,
    /// License has not been initialized
    e_ErrLicenseUninitialized = 26,
    /// Illegal access to the API interface
    e_ErrLicenseIllegalAccess = 27,
    /// Failed to read license file
    e_ErrLicenseFileReadFailed = 28,
    /// The license does not have OCR permissions.
    e_ErrLicenseOCRPermissionDeny = 29,
    /// The current conversion concurrency exceeds the license limit.
    e_ErrLicenseConcurrencyExceeded = 30,
    /// The current conversion pages exceed the license limit.
    e_ErrLicensePageLimitExceeded = 31,
    /// The quota persistence file has been tampered with.
    e_ErrLicenseQuotaCorrupted = 32,

    /// No tables found in the source file.
    e_ErrNoTable = 40,
    /// Failed to call OCR recognition.
    e_ErrOCRFailure = 41,

    /// Currently executing conversion task.
    e_ErrConverting = 60,

    /// Invalid argument provided.
    e_ErrInvalidArg = 80,

    /// The handle is invalid, possibly uninitialized or already released.
    e_ErrInvalidHandle = 81,

    /// The model file format is invalid or corrupted.
    e_ErrModelInvalidFormat = 82,

    /// The model does not support the requested function or operation.
    e_ErrModelFunctionUnsupported = 83,

    /// The model format is not supported by this system or SDK.
    e_ErrModelFormatUnsupported = 84,

    /// The model is incompatible with the current SDK version.
    e_ErrModelSDKMismatch = 85,

    /// The image data is empty or not provided.
    e_ErrImageDataEmpty = 86,

    /// The image width or height is invalid (e.g., less than or equal to zero).
    e_ErrImageWHError = 87,

    /// The image format is not supported (e.g., not RGB, YUV, etc.).
    e_ErrImageUnsupportedFormat = 88,

    /// The image is invalid or corrupted.
    e_ErrImageInvalid = 89,

    /// The resource (e.g., license, token) has expired.
    e_ErrExpire = 90,

    /// A required argument is missing.
    e_ErrMissingArg = 91,

    /// The current license does not support calling this API.
    e_ErrLicenseUnsupportedAPI = 92,

    /// The license does not match the device, module, or version.
    e_ErrLicenseMismatch = 93,

    /// The table data is invalid or null.
    e_ErrInvalidTable = 94,

    /// Unknown error
    e_ErrUnknown = 100
};

/// \brief Page layout mode.
enum class PageLayoutMode
{
    /// Box mode.
    e_Box,
    /// Flowing mode.
    e_Flow
};

/// \brief Image color mode.
enum class ImageColorMode
{
    /// Color mode.
    e_Color,
    /// Gray mode.
    e_Gray,
    /// Binary mode.
    e_Binary,
};

/// \brief Image type.
enum class ImageType
{
    /// .jpg.
    e_JPG,
    /// .jpeg.
    e_JPEG,
    /// .jp2.
    e_JPEG2000,
    /// .png.
    e_PNG,
    /// .bmp.
    e_BMP,
    /// .tiff.
    e_TIFF,
    /// .tga.
    e_TGA,
    /// .gif.
    e_GIF,
    /// .webp
    e_WEBP,
};

/// \brief Excel Worksheet option.
enum class ExcelWorksheetOption
{
    /// A worksheet to contain only one table.
    e_ForTable,
    /// A worksheet to contain table for PDF Page.
    e_ForPage,
    /// A worksheet to contain table for PDF Document.
    e_ForDocument
};

/// \brief Html option.
enum class HtmlOption
{
    /// Convert the entire PDF file into a single HTML file.
    e_SinglePage,
    /// Convert the PDF file into a single HTML file with an outline for navigation at the beginning of the HTML page.
    e_SinglePageWithBookmark,
    /// Convert the PDF file into multiple HTML files.
    e_MultiPage,
    /// Convert the PDF file into multiple HTML files. Each HTML file corresponds to a PDF page, and users can navigate to the next HTML file via a link at the bottom of the HTML page.
    e_MultiPageWithBookmark,
};

/// \brief OCR option.
enum class OCROption
{
    /// Recognize illegal characters in PDF documents.
    e_InvalidCharacter,
    /// Recognize scanned pages in PDF documents.
    e_ScanPage,
    /// Recognize illegal characters and scanned pages in PDF documents.
    e_InvalidCharacterAndScanPage,
    /// Recognize all characters on all pages.
    e_All,
};

/// \brief Convert options.
struct ConvertOptions
{
    /// Whether to enable AI layout analysis during conversion.
    bool enable_ai_layout = true;

    /// Whether to enable AI table recognition during conversion.
    bool enable_ai_table_recognition = true;

    /// Whether to contain images when converting,which takes effect only when enable_ocr is false.
    bool contain_image = true;

    /// Whether to contain page background images when converting,which takes effect only when enable_ocr is true.
    bool contain_page_background_image = true;

    /// Whether to contain table when convert pdf to json.
    bool json_contain_table = true;

    /// Whether to contain annotations when converting.
    bool contain_annotation = true;

    /// Whether to set contain all pdf content to the xlsx file.
    bool excel_all_content = false;

    /// Whether to set to save the table in csv format.
    bool excel_csv_format = false;

    /// Whether to use OCR.
    bool enable_ocr = false;

    /// Whether to make the text transparent in the output document.
    bool transparent_text = true;

    /// Whether format table when convert pdf to txt.
    bool txt_table_format = true;

    /// Whether to enhance the image path.
    bool image_path_enhance = false;

    /// Whether to convert formulas to images.
    bool formula_to_image = true;

    /// Whether to automatically create folder when exporting multiple documents.
    bool auto_create_folder = true;

    /// whether to output one document per page.
    bool output_document_per_page = false;

    /// Specify the image scaling of the image file.
    float image_scaling = 4.0;

    /// Specify the layout mode.
    PageLayoutMode page_layout_mode = PageLayoutMode::e_Flow;

    /// Specify the Excel worksheet option.
    ExcelWorksheetOption excel_worksheet_option = ExcelWorksheetOption::e_ForTable;

    /// Specify the Html option.
    HtmlOption html_option = HtmlOption::e_SinglePage;

    /// Specify the OCR option.
    OCROption ocr_option = OCROption::e_All;

    /// Specify the image color mode of the image file.
    ImageColorMode image_color_mode = ImageColorMode::e_Color;

    /// Specify the image type of the image file.
    ImageType image_type = ImageType::e_JPG;

    /// Specify the fontname to convert, e.g. "Arial".
    char font_name[256] = {0};

    /// Specify the pages to convert, e.g. "1-3,5,7-9".
    char page_ranges[256] = {0};

    /// Specify the OCR language count.
    int language_count = 0;

     /// Specify the OCR languages.
    OCRLanguage languages[32] = {};
};

}
}

#endif //BASE_TYPE_H
