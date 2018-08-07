#include <Keyboard.h>

void setup() {
  Keyboard.begin();//开始键盘通信
  delay(3000);//延时（等待系统安装键盘驱动）
  Keyboard.press(KEY_LEFT_GUI);//按下win键
  Keyboard.press('r');//按下r键
  Keyboard.release(KEY_LEFT_GUI);//释放win键
  Keyboard.release('r');//释放r键 （打开“运行”窗口）
  delay(50);
  Keyboard.println("powershell.exe -command start-process powershell -verb runAs");  //开启管理员级别的powershell
  delay(1000);
  Keyboard.press(KEY_LEFT_ARROW); //按住左方向键
  Keyboard.release(KEY_LEFT_ARROW); //释放左方向键
  Keyboard.press(KEY_RETURN); //按住enter键
  Keyboard.release(KEY_RETURN);//释放enter键
  Keyboard.end();//结束键盘通信

}

void loop() {
