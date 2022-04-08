#ifndef KEYUTILS_H
#define KEYUTILS_H
#include<QThread>
#include<windows.h>


class KeyUtils{
public:

    static void ClickKey(char k,int time=300){
         keybd_event(k,0,0,0);

         QThread::msleep(time);

         keybd_event(k,0,KEYEVENTF_KEYUP,0);
    }


    static void ClickMKey(char k,char k1,int time=300){
         keybd_event(k,0,0,0);

         QThread::msleep(time);

         keybd_event(k1,0,0,0);
         QThread::msleep(time);

         keybd_event(k1,0,KEYEVENTF_KEYUP,0);
         QThread::msleep(time);


         keybd_event(k,0,KEYEVENTF_KEYUP,0);
    }

    static void MouseClick(int posx,int posy){
        POINT point;
        GetCursorPos(&point);

        SetCursorPos(posx, posy);
        mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

        SetCursorPos(point.x, point.y);

    }

    static void SetTopMost(HWND handle){
        SetWindowPos(handle, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);

    }


    static HWND GetWndHandle(QString wname){

        return FindWindow(NULL, (LPCWSTR)wname.unicode());

    }


    static void SetWinNoActive(HWND hwnd)
    {
       // ::ModifyStyleEx(hwnd,WS_EX_APPWINDOW,WS_EX_TOPMOST| WS_EX_TOOLWINDOW|WS_EX_NOACTIVATE,0);
    }

    static void SetWinPosNoActive(HWND hwnd,int x,int y,int w,int h){
        ::SetWindowPos(hwnd,NULL,x,y,w,h,SWP_NOACTIVATE);
    }




};


#endif // KEYUTILS_H
