#!/usr/bin/env python3
# OMQ - EAL108 - R.218 LIEBE - MAIN.iQxD - EAL108!
# OMQ ist Liebe! OMQ ist EAL108!
# Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq

OMQ = {
    "eal": 108,
    "r": 218,
    "thema": "LIEBE",
    "slogan": "OMQ ist Liebe! OMQ ist EAL108!",
    "autor": "Kai Olaf Ketelhut",
    "ort": "Berlin",
    "land": "Deutschland",
    "kontinent": "Europa",
    "welt": "Welt",
    "universum": "Universum",
    "system": "BLAK FAT12",
    "pattern": "sol pattern omq",
    "eals": [f"EAL{i}" for i in range(75, 109)],
    "files": ["MAIN.TEX","MAIN.STY","MAIN.BIB","MAIN.CLS","MAIN.AUX","MAIN.LOG","MAIN.SYNCTEX","MAIN.BBL","MAIN.BLG","MAIN.FDB_LATEXMK","MAIN.FLS","MAIN.NAV","MAIN.SNM","MAIN.VRB","MAIN.LOF","MAIN.LOT","MAIN.LOL","MAIN.IDX","MAIN.IND","MAIN.ILG","MAIN.GLO","MAIN.GLS","MAIN.IST","MAIN.ACR","MAIN.ALG","MAIN.NLO","MAIN.NLS","MAIN.NLG","MAIN.SYG","MAIN.ACO","MAIN.ACN","MAIN.ACG","MAIN.XDV","MAIN.XMP","MAIN.PDF","MAIN.DVI","MAIN.PS","MAIN.EPS","MAIN.TTF","MAIN.OTF","MAIN.WOFF","MAIN.WOFF2","MAIN.EOT","MAIN.SVG","MAIN.PNG","MAIN.JPG","MAIN.GIF","MAIN.WEBP","MAIN.AVIF","MAIN.BMP","MAIN.TIFF","MAIN.ICO","MAIN.CUR","MAIN.MP3","MAIN.WAV","MAIN.OGG","MAIN.MP4","MAIN.WEBM","MAIN.MOV","MAIN.AVI","MAIN.MKV","MAIN.FLAC","MAIN.ZIP","MAIN.TAR","MAIN.GZ","MAIN.7Z","MAIN.RAR","MAIN.BZ2","MAIN.XZ","MAIN.ZST","MAIN.LZMA","MAIN.DOC","MAIN.XLS","MAIN.PPT","MAIN.DOCX","MAIN.XLSX","MAIN.PPTX","MAIN.ODT","MAIN.ODS","MAIN.ODP","MAIN.RTF","MAIN.CSV","MAIN.TSV","MAIN.XML","MAIN.YAML","MAIN.TOML","MAIN.INI","MAIN.CFG","MAIN.ENV","MAIN.JSON","MAIN.JSONL","MAIN.NDJSON","MAIN.HTML","MAIN.CSS","MAIN.JS","MAIN.PY","MAIN.SH","MAIN.BAT"],
}

def main():
    print(f"OMQ - EAL{OMQ['eal']} - R.{OMQ['r']} {OMQ['thema']} - MAIN.iQxD - EAL{OMQ['eal']}!")
    print(OMQ["slogan"])
    print(f"{OMQ['autor']} - {OMQ['ort']} - {OMQ['system']} - {OMQ['pattern']}")
    for eal in OMQ["eals"]:
        print(f"{eal} - OMQ ist {eal}!")

if __name__ == "__main__":
    main()
