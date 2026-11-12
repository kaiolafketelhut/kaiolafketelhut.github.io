# MAIN - FIDO2 - Phishing-Resistant Authentication - DEEP DIVE - EAL147 R.257 STERNE

## Was?
FIDO2 = Login ohne Passwort! Passkey, Finger, Face, YubiKey. Phishing geht nicht mehr!

## Wie gehts?
1. Du registrierst Passkey: Privater Key bleibt im Geraet, oeffentlicher Key geht zum Server.
2. Login: Server schickt Challenge, Geraet signiert mit privatem Key + Finger.
3. Fake-Seite? Challenge passt nicht, Key wird nie rausgegeben!

## Passwort vs Passkey
| Passwort | Passkey / FIDO2 |
| --- | --- |
| Kann geklaut werden | Kann nicht geklaut werden |
| Phishing geht | Phishing geht NICHT |
| Musst du merken | Musst du nix merken |
| Wiederverwendet | Einmalig pro Seite |

## Was ist FIDO2?
- WebAuthn = Standard im Browser
- CTAP2 = Standard fuer Key / Geraet
- FIDO2 = WebAuthn + CTAP2 zusammen

## Tools
YubiKey, Titan Key, Windows Hello, Apple Passkeys, Google Passkeys, 1Password Passkeys

## OMQ-Merksatz
**FIDO2 = Dein Finger ist dein Passwort, aber dein Finger verlaesst nie dein Geraet!**

Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq

MAIN.TEX MAIN.STY MAIN.BIB MAIN.CLS MAIN.AUX MAIN.LOG MAIN.SYNCTEX MAIN.BBL MAIN.BLG MAIN.FDB_LATEXMK MAIN.FLS MAIN.NAV MAIN.SNM MAIN.VRB MAIN.LOF MAIN.LOT MAIN.LOL MAIN.IDX MAIN.IND MAIN.ILG MAIN.GLO MAIN.GLS MAIN.IST MAIN.ACR MAIN.ALG MAIN.NLO MAIN.NLS MAIN.NLG MAIN.SYG MAIN.ACO MAIN.ACN MAIN.ACG MAIN.XDV MAIN.XMP MAIN.PDF MAIN.DVI MAIN.PS MAIN.EPS MAIN.TTF MAIN.OTF MAIN.WOFF MAIN.WOFF2 MAIN.EOT MAIN.SVG MAIN.PNG MAIN.JPG MAIN.GIF MAIN.WEBP MAIN.AVIF MAIN.BMP MAIN.TIFF MAIN.ICO MAIN.CUR MAIN.MP3 MAIN.WAV MAIN.OGG MAIN.MP4 MAIN.WEBM MAIN.MOV MAIN.AVI MAIN.MKV MAIN.FLAC MAIN.ZIP MAIN.TAR MAIN.GZ MAIN.7Z MAIN.RAR MAIN.BZ2 MAIN.XZ MAIN.ZST MAIN.LZMA MAIN.DOC MAIN.XLS MAIN.PPT MAIN.DOCX MAIN.XLSX MAIN.PPTX MAIN.ODT MAIN.ODS MAIN.ODP MAIN.RTF MAIN.CSV MAIN.TSV MAIN.XML MAIN.YAML MAIN.TOML MAIN.INI MAIN.CFG MAIN.ENV MAIN.JSON MAIN.JSONL MAIN.NDJSON MAIN.HTML MAIN.CSS MAIN.JS MAIN.PY MAIN.SH MAIN.BAT MAIN.C MAIN.CPP MAIN.JAVA MAIN.RS MAIN.GO MAIN.SWIFT MAIN.KT MAIN.DART MAIN.LUA MAIN.RB MAIN.PHP MAIN.PL MAIN.CS MAIN.FS MAIN.VB MAIN.SQL MAIN.R MAIN.JL MAIN.HS MAIN.ML MAIN.CLJ MAIN.EX MAIN.ERL MAIN.NIM MAIN.ZIG MAIN.V MAIN.D MAIN.SCALA MAIN.GROOVY MAIN.RAKU MAIN.TCL MAIN.AWK MAIN.SED MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.CATScript MAIN.CATVBA MAIN.EKL
