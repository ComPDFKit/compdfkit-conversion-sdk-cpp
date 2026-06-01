#include <iostream>
#include <string>

#include "compdf_conversion.h"

using namespace compdf;
using namespace compdf::base;
using namespace compdf::common;
using namespace compdf::conversion;

std::string input_file = "..\\input_files\\";
std::string output_file = "..\\output_files\\";
std::string password = "";

const char* license = R"(..\\license.xml)";

auto progress_lambda = [](int current_page_count, int total_page_count) {
    std::cout << "lambda convert rate: " << current_page_count << "/" << total_page_count << std::endl;
};

auto cancel_lambda = []() -> bool {
    // Return true to cancel the conversion, false to continue.
    return false;
	};

int main()
{
    std::cout << "compdfkit conversion sdk license verify: " << (int)LibraryManager::LicenseVerify(license, "", "com.compdfkit.conversion") << std::endl;
    LibraryManager::Initialize("..\\..\\resource");
    LibraryManager::SetLogger(false, false);

    LibraryManager::SetDocumentAIModel("..\\..\\resource\\models\\documentai.model");
    ConvertOptions opt;
    CConvertCallback callback = {};
	callback.progress = progress_lambda;
	callback.cancel = cancel_lambda;
    // pdf to word
    CPDFConversion::StartPDFToWord((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("word.docx").c_str(), opt, &callback);

    // pdf to excel
    CPDFConversion::StartPDFToExcel((input_file + "excel.pdf").c_str(), password.c_str(), std::string(output_file).append("excel.xlsx").c_str(), opt, &callback);

    // pdf to ppt
    CPDFConversion::StartPDFToPpt((input_file + "powerpoint.pdf").c_str(), password.c_str(), std::string(output_file).append("powerpoint.pptx").c_str(), opt, &callback);

    // pdf to csv
    opt.excel_csv_format = true;
    CPDFConversion::StartPDFToExcel((input_file + "excel.pdf").c_str(), password.c_str(), std::string(output_file).c_str(), opt, &callback);

    // pdf to html
    opt.page_layout_mode = PageLayoutMode::e_Box;
    CPDFConversion::StartPDFToHtml((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("html.html").c_str(), opt, &callback);

    // pdf to rtf
    CPDFConversion::StartPDFToRtf((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("rtf.rtf").c_str(), opt, &callback);

    // pdf to image
    CPDFConversion::StartPDFToImage((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).c_str(), opt, &callback);

    // pdf to txt
    CPDFConversion::StartPDFToTxt((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("txt.txt").c_str(), opt, &callback);

    // pdf to json
    CPDFConversion::StartPDFToJson((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("json.json").c_str(), opt, &callback);

    // pdf to markdown
    CPDFConversion::StartPDFToMarkdown((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("markdown.md").c_str(), opt, &callback);


    // pdf to searchable pdf
    opt.enable_ocr = true;
	opt.transparent_text = true;
	opt.languages[0] = OCRLanguage::e_English;
    opt.language_count = 1;
    CPDFConversion::StartPDFToSearchablePdf((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("pdf.pdf").c_str(), opt, &callback);

    // pdf to ofd
    CPDFConversion::StartPDFToOfd((input_file + "word.pdf").c_str(), password.c_str(), std::string(output_file).append("pdf.pdf").c_str(), opt, &callback);

    char version[30];
    LibraryManager::GetVersion(version);
    std::cout << "compdfkit conversion sdk version: " << version << std::endl;
    
    LibraryManager::Release();
    return 0;
}
