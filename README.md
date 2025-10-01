# ZiXuanProtobuf

A Unreal plugin for protobuf V30.0 | V32.0

# Code:

Support Platform: Win64
  
Support Language: C++
  
Support UnrealEngine Version: 5.2


# Releases:

---

protobuf V32.0 Support Platform: Win64 Support Language: C++ Support UnrealEngine Version: 5.6
|  Version   | Win64 Support | Android Support | Liunx Support | Mac Support |  IOS Support |
|  ----  | ----  | ---- | ---- | ---- | ---- |
| 5.0  | Not test |/|/|/|/|/|
| 5.1  | Not test |/|/|/|/|/|
| 5.2  | Error|/|/|/|/|/|
| 5.3  | Not test |/|/|/|/|/|
| 5.4  | Support |/|/|/|/|/|
| 5.5  | Not test |/|/|/|/|/|
| 5.6  | Support |/|/|/|/|/|

Same data save size and load and save speed(Simple Test)

|  Category   | protobuf | sav(UESaveGame)| Json | 
|  ----  | ----  | ---- | ---- | 
| Save  | 27.1 MB |184 MB|290 MB|
| Speed  | 1s |6s|13s|
---

protobuf V30.0 Support Platform: Win64 Support Language: C++ Support UnrealEngine Version: 5.2

UnFixed:
|  Version   | Win64 Support | Android Support | Liunx Support | Mac Support |  IOS Support |
|  ----  | ----  | ---- | ---- | ---- | ---- |
| 5.0  | Not test |/|/|/|/|/|
| 5.1  | Not test |/|/|/|/|/|
| 5.2  | Support |/|/|/|/|/|
| 5.3  | Not test |/|/|/|/|/|
| 5.4  | Error |/|/|/|/|/|
| 5.5  | Error |/|/|/|/|/|
| 5.6  | Error |/|/|/|/|/|

---

# Tutorial:

 If you want to create a compilation that matches your own version
 
 These may be helpful to you!


 [Chinese]
 
 https://zhuanlan.zhihu.com/p/9885169028

```diff
other error
- <font color='red'> Error LNK2001 : unresolved external symbol "class google::protobuf::internal::GlobalEmptyString const google::protobuf::internal::fixed_address_empty_string" (?fixed_address_empty_string@internal@protobuf@google@@3VGlobalEmptyString@123@B) 11>UnrealEditor-ZiXuanProtobuf.dll: Error LNK1120 : 1 unresolved externals </font>

if you meet errot like this 
- undefined symbol: absl::lts_20240116::log_internal::LogMessage& absl::lts_20240116::log_internal::LogMessage::operator
not good to solve error
find strip.h
- defined(STRIP_LOG) && STRIP_LOG
+ true
find nullstream.h
-[[noreturn]] ~NullStreamFatal() {_exit(1)}
+ ~NullStreamFatal() {}
