# sixense-wine-fakedll

Wine fakelib to translate sixense dll calls into native .so to add support for Razer Hydra controllers in wine apps.

## How to compile and install

You need:
* wine
* GNU Make
* Sixense SDK and libraries (libsixense.so, libsixense_x64.so) installed in systemd-wide, i.e. where your libraries and headers usually lying. If not, you need somehow add them in searching parameters.

Steps:
1. Type `make` to compile 32-bit library (sixense.dll.so) or `make -f Makefile-x64` to compile 64-bit library (sixense_x64.dll.so). If you build for both architectures simultaneously, don't forget to clean up before, or building might fail (different architecture .o and such).
2. Rename or remove sixense(_x64).dll near the target exe.
3. Copy compiled .so to exe dir. Remove .so in name by renaming.
4. Cross fingers and hope it works.

## Notes
Tested with sample 3d app supplied with Sixense SDK. I didn't wrap sixense_utils.dll as I don't think it needs to. Create an issue to let me know if it required.

## References
https://sites.google.com/site/programmersnotebook/how-to-replace-windows-dll-with-wine-dll  
https://www.winehq.org/docs/winelib-guide/index
