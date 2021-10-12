// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"

//动态链接时调用LoadLibrary（加载dll）和FreeLibrary(解除映射)都会调用DllMain函数

//隐式加载是在系统启动时一次性把所有的DLL的导出函数加载到可执行文件中，需要用到.h和.lib文件。 #pragma comment（lib, "DllTest.lib"）
//动态库的显示加载 只需要dll文件即可 程序运行时不加载dll 只有在loadlibrary 使用库函数时才加载dll\

BOOL APIENTRY DllMain( HMODULE hModule,//指向DLL本身的实例句柄
                       DWORD  ul_reason_for_call,//指明了DLL被调用的原因
                       LPVOID lpReserved//隐式加载（加载时动态链接）和显式加载（运行时动态加载）。
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH://DLL文件被映射到进程的地址空间时，系统调用该DLL的DllMain函数
    case DLL_THREAD_ATTACH://当进程创建一线程时，系统查看当前映射到进程地址空间中的所有DLL文件映像，并用值DLL_THREAD_ATTACH调用DLL的DllMain函数。
    case DLL_THREAD_DETACH://如果线程调用了ExitThread来结束线程（线程函数返回时，系统也会自动调用ExitThread），系统查看当前映射到进程空间中的所有DLL文件映像，并用DLL_THREAD_DETACH来调用DllMain函数，通知所有的DLL去执行线程级的清理工作。
    case DLL_PROCESS_DETACH:// 当DLL被从进程的地址空间解除映射时，系统调用了它的DllMain
        break;
    }
    return TRUE;
}

