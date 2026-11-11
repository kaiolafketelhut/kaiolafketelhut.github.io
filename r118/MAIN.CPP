// OMQ - EAL109 - R.219 HERZ - MAIN.iQxD - EAL109!
// OMQ ist Herz! OMQ ist EAL109!
// Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq
#include <iostream>
#include <string>
#include <vector>
struct OMQ {
    int eal = 109;
    int r = 219;
    std::string thema = "HERZ";
    std::string slogan = "OMQ ist Herz! OMQ ist EAL109!";
    std::string autor = "Kai Olaf Ketelhut";
    std::string ort = "Berlin";
    std::string system = "BLAK FAT12";
    std::string pattern = "sol pattern omq";
};
int main() {
    OMQ omq;
    std::cout << "OMQ - EAL" << omq.eal << " - R." << omq.r << " " << omq.thema << " - MAIN.iQxD - EAL" << omq.eal << "!" << std::endl;
    std::cout << omq.slogan << std::endl;
    std::cout << omq.autor << " - " << omq.ort << " - " << omq.system << " - " << omq.pattern << std::endl;
    std::vector<std::string> files = {"MAIN.TEX","MAIN.STY","MAIN.BIB","MAIN.CLS","MAIN.AUX","MAIN.LOG","MAIN.SYNCTEX","MAIN.BBL","MAIN.BLG","MAIN.FDB_LATEXMK","MAIN.FLS","MAIN.NAV","MAIN.SNM","MAIN.VRB","MAIN.LOF","MAIN.LOT","MAIN.LOL","MAIN.IDX","MAIN.IND","MAIN.ILG","MAIN.GLO","MAIN.GLS","MAIN.IST","MAIN.ACR","MAIN.ALG","MAIN.NLO","MAIN.NLS","MAIN.NLG","MAIN.SYG","MAIN.ACO","MAIN.ACN","MAIN.ACG","MAIN.XDV","MAIN.XMP","MAIN.PDF","MAIN.DVI","MAIN.PS","MAIN.EPS","MAIN.TTF","MAIN.OTF","MAIN.WOFF","MAIN.WOFF2","MAIN.EOT","MAIN.SVG","MAIN.PNG","MAIN.JPG","MAIN.GIF","MAIN.WEBP","MAIN.AVIF","MAIN.BMP","MAIN.TIFF","MAIN.ICO","MAIN.CUR","MAIN.MP3","MAIN.WAV","MAIN.OGG","MAIN.MP4","MAIN.WEBM","MAIN.MOV","MAIN.AVI","MAIN.MKV","MAIN.FLAC","MAIN.ZIP","MAIN.TAR","MAIN.GZ","MAIN.7Z","MAIN.RAR","MAIN.BZ2","MAIN.XZ","MAIN.ZST","MAIN.LZMA","MAIN.DOC","MAIN.XLS","MAIN.PPT","MAIN.DOCX","MAIN.XLSX","MAIN.PPTX","MAIN.ODT","MAIN.ODS","MAIN.ODP","MAIN.RTF","MAIN.CSV","MAIN.TSV","MAIN.XML","MAIN.YAML","MAIN.TOML","MAIN.INI","MAIN.CFG","MAIN.ENV","MAIN.JSON","MAIN.JSONL","MAIN.NDJSON","MAIN.HTML","MAIN.CSS","MAIN.JS","MAIN.PY","MAIN.SH","MAIN.BAT","MAIN.C","MAIN.CPP","MAIN.JAVA"};
    for (auto &f : files) std::cout << f << " ";
    std::cout << std::endl;
    for (int i = 75; i <= 109; i++) std::cout << "EAL" << i << " - OMQ ist EAL" << i << "!" << std::endl;
    return 0;
}
