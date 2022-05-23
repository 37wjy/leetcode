1. 请简述值类型与引用类型的区别

我是想简述下为什么第一个问题总是这个，因为所有出题的面试官都不走心的，
实际项目肯定是引用类型+值类型混用，难道你没写过? int currLevel =Game.Instance.LevelCount；

值类型包括：数值类型，结构体，bool型，用户定义的结构体，枚举，可空类型。

引用类型包括：数组，用户定义的类、接口、委托，object，字符串，null类型，类。

2. C#中所有引用类型的基类是什么

C#基类Object 包名System

3. 请简述ArrayList和List<Int>的主要区别

Unity3d游戏开发过程中很少见ArrayList，都是用的List<>和[]多，
ArrayList这是老C#人才会用的变量，也可能是从JAVA借鉴过来，JAVA有Hashset做数组变量，
哥一开始学C#1.0对ArrayList的框架很不能理解，ArrayList继承List觉得很多余的？
还有问这个问题的百度一查大把，真心没几个能从历史，当前流行项目，未来趋势等各个方面分析出原因，不过分析出来也没什么乱用，面试官出题的能不能别那么懒？
ArrayList 是一个数组，继承实现了List基类，是比较传统使用的程序数组变量
List<int>是调用List<T>，用了C#的泛型特性
4. 请简述GC（垃圾回收）产生的原因，并描述如何避免？
下面是标准答案，其实我倒想问问，你写游戏用String??还用到StringBuilder??
CLR：公共运行时环境，管理托管堆。
CTR：设置引用类型，值类型。
GC：只负责回收托管对象，不负责回收非托管对象。


避免：
    . 减少new产生对象的次数
    . 使用公用的对象（静态成员）
    . 将String换为StringBuilder
    
5. 请描述Interface与抽象类之间的不同

抽象类表示该类已经有一些具体的实现，而接口只是定义各方法，并没有具提实现，子类继承抽象父类，可以只是继承部分方法或直接引用父类的方法。类实现接口必须实现该接口所有方法

6. 下列代码在运行中会产生几个临时对象？
 
先不论代码书写是否有错，或者命名的，每个new都会产生临时对象，()括号等同于new，那么应该是6
*假如我问面试官，这2年要如何优化，他不看标准答案，能答出来吗？（其实你的思路可能比他还清晰，因为他工作多年，几年来都不会见到这种代码，那他为什么要出这个题？别为难面试官，人家从百度抄题目下来也是不容易的）

7. 下列代码在运行中会发生什么问题？如何避免？
 
答：会产生运行时错误，因为foreach是只读的。不能一边遍历一边修改。

8. 请简述关键字Sealed用在类声明和函数声明时的作用
答：类声明时可防止其他类继承此类，在方法中声明则可防止派生类重写此方法。
关键字Seal既然可以声明类，也可以声明方法
9. 请简述private，public，protected，internal的区别
10. 反射的实现原理？

Assembly – 程序集

Class – 类（type）

Method –方法(methodinfo)

Property – 属性(proinfo)

但是我好像不知道反射原理是什么， 有一个方法是Invoke(“Function_name”)在Unity3d的部分游戏源码见得比较多，作用和普通Call方法一样，虽然有些炫技，但是却是在用反射实现一些游戏逻辑，而且这个游戏逻辑在Android|IOS等平台也是运行正常，反射的作用主要是跨程序集调用，作为一个基本抽象思维的程序员，应该要理解跨当前运行时的程序集本身当然也一个程序集，C#反射能广泛应用，并且出错几乎是0的原因，应该就是C#程序集的开放，格式不变和不加密（微软本身反而不支持开源）

11. Net与Mono的关系？

有人说.net只能在 windows上面跑，Mono能跨平台，是.net的扩展，这说法肯定是不正确的，C#(.Net)自诞生那天起就为了超越JAVA（应该黑丝2003年，.NET一出就硬抄了JAVA所有的特性，还强调所有新特性超越JAVA），C#的GC就是对应JAVA的垃圾回收机制，可惜的是长期以来C# Framework的体积比现在2018年的JVM虚拟机jre8还大

JVM是一次书写代码，所有平台通用

那么C# Framework(.Net)肯定也是支持跨平台

嗯，MONO是？官方一大段英文其实只要看最后2个就知道based on the ECMA standards

ECMA是什么鬼？你现在只要知道来自欧洲的标准就可以了

由于微软的不开源，加上.NET的体积比较大，所以开源程序员都希望找到一种可以用C#或者其他书写，却是极度简化版的.NET，结果当年欧洲某小国某程序员秘密组织找到了微软的内核CIL（Common Intermediate Language通用中间语言，也叫做MSIL微软中间语言）的一种代码指令集，CIL可以在任何支持CLI（Common Language Infrastructure，通用语言基础结构）的环境中运行

（微软一开始心比较大，目标是所有语言书写，在所有平台书运行，开发web,app等所有应用，都通过visual studio，结果被Google和乔布斯打的头低低，Google在语言性和跨平台功能一直强调领先，乔布斯主张程序即艺术，iphone1,2狠狠打了Bill Gate2下，国内的c#程序员一直以来是最低下收入的一种程序员）

当时欧洲小国的程序员，优化了CLI并做出了MonoDeveloper这个IDE工具，后来他们成立了一个Xamarim公司，现在已经被微软收购，开源的MONO也没有继续下去
Unity现在应该是基于ECMA这个协议才能得以继续使用旧版本的开源MONO而不需要和微软杠上
最近中兴被美国状告事件，类比一下MONO和微软的关系你就懂了，政治在这里不能多说，我就不提了，但学习程序以外难道你学校就没有政治课？难道你志愿不是考公务员报效国家？你不理政治，政治会来修理你。
我的推论是，mono是一种中间语言，而内核还是.net的一个简化版的虚拟机，能跨平台运行，这个虚拟机类似于jvm虚拟机，提供各种框架，API和程序执行和调用功能，但明显支持的最强语言还是C#

12. 简述Unity3D支持的作为脚本的语言的名称

C#
JS
Boo – 这个我也不清楚
13. Unity3D是否支持写成多线程程序？如果支持的话需要注意什么？

Unity仅提供携程，让你可以安心订机票
14. Unity3D的协程和C#线程之间的区别是什么？

线程不安全
同一个时刻只有一个coroutinue运行，但线程可以并行执行，所谓多线程。而coroutinue可以让出当前执行权限，让其他coroutinue插队执行
golang里面是goroutinue
lua里面也是携程，可以订机票
Python既提供携程，也提供现成
理论上来说：
携程在服务器开发过程中比较合适，golang这种专为服务器开发的语言就提供携程让你可以预定景点门票；
线程真的很不稳定，不安全，不同的系统，例如windows vs Mac , windos vs Linux, Linux vs Unix都是实现不同的，程序员甚至需要按不同系统平台分别处理和调试；
要是你用的好，线程能订机票，而携程能做出线程的花样

15. U3D中用于记录节点空间几何信息的组件名称，及其父类名称

Transform, 父类Component

16. 简述四元数的作用，四元数对欧拉角的优点？

交通大学研究生，乐乐姐的文章必须要去看一下
1）增量旋转
2）避免万向锁
3）给定方位的表达式有2种，互为正负（欧拉角有多种）
17.向量的点乘、叉乘以及归一化的意义？
1）点乘描述了2个方向的相似程度
2） 叉乘得到垂直于这2个的向量的一个向量
3）标准化向量，在一些方向，角度求解中应用，只关心相互间的方位，不考虑长度
18. 矩阵相乘的意义及注意点
意义在于向量的变换，旋转，投影，平移
左乘和右乘，不满足交换律（这个答法比较高校书本式，缺少经验的说法）
19. 为何大家都在移动设备上寻求U3D原生GUI的替代方案
这是Unity3.5的问题？现在Unity2018都快出了，你还问，面试官你到底有几年Unity经验？
20. 请简述如何在不同分辨率下保持UI的一致性
UI适配，如果你曾经很长一段时间用过flex，和cocos2dx，甚至需要你自己去写适配框架
一般的方法有，布局适配，等宽，等长，这几种方法
NGUI在UIRoot提供了这3种适配方法
21. 为什么dynamic font在unicode环境下优于static font
使用动态字体时，Unity将不会预先生成一个与所有字体的字符纹理， 静态字体体积会很大
22. Render的作用？描述MeshRender和SkinnedMeshRender的关系与不同
Render就是对象在3D世界的绘制
SkinnedMeshRender都提示未来可能被放弃了，面试官这份题真的很旧了，拜托换一下，但SkinnedMeshREnder在换装插件比较流行，SkinnedMeshRenderer需要骨骼、材质、Mesh才能发挥作用，难道Unity要放弃骨骼？？
23. 简述SkinnedMesh的实现原理
根据骨骼，动态整体实现表层Mesh，相对普通mesh由不同面片堆砌，根据骨骼结构，对顶点的变换计算出不同的蒙皮，最终进行模型的渲染
24. 在场景中放置多个Camera并同时处于活动状态会发生什么？
受Camera覆盖各场景物件均同时实时绘制，主Camera视场里有多个Camera的渲染合集
25. Prefab的作用？如何在移动环境的设备下恰当地使用它？
Prefab在实例化的时候用到，主要用于经常会用到的物体做成一个集合方便反复使用，在移动环境中，由于Prefab一般体积比较大，常需要实例化，拆分成合适大小的AssetBundle，离线下载比较恰当
26. 如何销毁一个UnityEngine.Object及其子类
Destory
如果是Editor自定义开发需要用DestoryImmediate
27. 为什么Unity3D中会发生在组件上出现数据丢失的情况？
对象在Editor外部被删除或者移动位置
28. 如何安全的在不同工程间安全地迁移asset数据？三种方法
将Assets目录和Library目录一起迁移
导出包
用unity自带的assets Server功能
29. MeshCollider和其他Collider的一个主要不同点？
答：Meshcollider再快也是基于V3顶点~~ 建议还是用boxcollider，boxcollider本身是基于算法，没有面的概念。
30. 当一个细小的高速物体撞向另一个较大的物体时，会出现什么情况？如何避免？
可能出现碰撞检测失败，解决方法无外乎3个
增加高速物体体积
碰撞检测判断时间缩短（Physics.SimulationStep）
控制速度
31. OnEnable、Awake、Start运行时的发生顺序？哪些可能在同一个对象周期中反复的发生？


OnEnable
\
Awake
\
Start
反复发生的是Start，这个问题实际意义不大，好像只有DontdestoryOnload下面的对象会反复调用，但实情如何笔者表示怀疑

谢谢评论区指正，

反复发生的应该是:OnEnable，尽量不要在Update()写代码，所以我现在OnEnable也用的少，毕竟会多次触发的，代码最好还是一次写成，少调试，少踩坑（当然，OnEnable 一般写初始化代码，机会没在这上面踩坑过就是了）

gameObject.SetActive(true);//运行时可反复设置
而Awake()是在实例化时触发，不可能实例化多次

GameObject.Instatiate()
而Start()在场景运行时，场景内的每个对象都只会触发一次

SceeneManager.Start()

32.请简述OnBecameVisible及OnBecameInvisible的发生时机，以及这一对回调函数的意义？
答：当物体是否可见切换之时。可以用于只需要在物体可见时才进行的计算。
33.Unity3D如何获知场景中需要加载的数据？
Resource.Load
AssetBundle
34.MeshRender中material和sharedmaterial的区别？
修改sharedMaterial将改变所有物体使用这个材质的外观，并且也改变储存在工程里的材质设置。
不推荐修改由sharedMaterial返回的材质。如果你想修改渲染器的材质，使用material替代。

（在Editor自定开发中，只能用sharedMaterial，sharedMaterial自动等于material）

最近机缘巧合，居然在看Unity Editor的旧版本的源码

内核用了c++的智能指针，里面的一个share指针，shared_ptr<>,所以有sharedMaterial一说

还有sharedMesh,sharedShader

指针不就是内存，指向同一内存的还不是一同修改，shared_ptr<>又有什么用?又一世纪难题
