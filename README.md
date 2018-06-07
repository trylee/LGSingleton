# LGSingleton
该工具可以在ios平台快速创建单例类，仅需两行代码即可，具体使用步骤如下:

- 直接将文件夹中的`LGSingleton.h`文件拖进项目中

---

- 在需要创建的单例类的.h文件中导入头文件，在@interface中直接使用`LGSingletonH`宏并传入名称即可，如图:

![LGSingletonH](https://github.com/trylee/Pictures/blob/master/Snip20180607_1.png)

---

- 同样在需要创建单例的类的.m文件中使用`LGSingletonM`宏并传入名称，如图：
![LGSingletonM](https://github.com/trylee/Pictures/blob/master/Snip20180607_3.png)

---
- 现在该类就已经成为单例，大胆放心的使用吧，可以试着创建几个对象打印下内存地址测试一下