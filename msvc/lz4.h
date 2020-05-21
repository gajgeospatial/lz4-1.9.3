// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the LZ4_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// LZ4_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef LZ4_EXPORTS
#define LZ4_API __declspec(dllexport)
#else
#define LZ4_API __declspec(dllimport)
#endif

// This class is exported from the dll
class LZ4_API Clz4 {
public:
	Clz4(void);
	// TODO: add your methods here.
};

extern LZ4_API int nlz4;

LZ4_API int fnlz4(void);
