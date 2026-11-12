# OMQ - EAL165 - R.275 NEPTUN - Nr.29 KUBERNETES - DEEP DIVE!

## OMQ ist Neptun! OMQ ist EAL165! Weitester Planet = Weiteste Steuerung!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### Kubernetes = 100 Boxen steuern!
Docker = 1 Box! Kubernetes = 100 Boxen! K8s sagt: Wo läuft Box? Kaputt? Neu starten! Zu viel los? Mehr Boxen!
**K8s = K + 8 Buchstaben + s = Kubernetes!**

### Die 4 K8s-Begriffe
| Begriff | Was? | OMQ-Merksatz |
| --- | --- | --- |
| Pod | Kleinste Einheit, 1+ Container drin | 1 Box + Inhalt! |
| Deployment | Sagt: Ich will 3 Pods! Immer! | Chef sagt 3! |
| Service | Feste Adresse, auch wenn Pod stirbt | Türschild bleibt! |
| Node | Computer, wo Pods laufen | Regal! |

### Docker vs Kubernetes
|  | Docker | Kubernetes |
| --- | --- | --- |
| Was? | 1 Box bauen + laufen | Viele Boxen steuern |
| Kaputt? | Du merkst es, du startest neu | K8s startet selbst neu! |
| Viele User? | Du startest von Hand mehr | K8s skaliert selbst! |

### OMQ-Beispiel - YAML für OMQ
```yaml
apiVersion: apps/v1
kind: Deployment
metadata:
  name: omq
spec:
  replicas: 3
  template:
    spec:
      containers:
      - name: omq
        image: omq:latest
```
Das heisst: K8s, halte immer 3 OMQ-Boxen am Leben! 1 stirbt? Mach neue!

### 3 Fehler vermeiden
1. **Kein Limit:** Pod frisst alles! Immer CPU + RAM Limit setzen!
2. **Kein Health-Check:** K8s weiss nicht, ob Pod krank ist! LivenessProbe setzen!
3. **Alles in 1 Pod:** 1 Pod kaputt = alles kaputt! Trennen: Web + DB getrennt!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL165 R.275 NEPTUN - Nr.29 von 42

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
