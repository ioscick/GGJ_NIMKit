{
"name": "GGJ_NIMKit",
"version": "0.1.0",
"summary": "Netease IM UI Kit",
"homepage": "https://github.com/ioscick/GGJ_NIMKit.git",

"authors": "154986932@qq.com",
"source": {
"git": "https://github.com/ioscick/GGJ_NIMKit.git",
"tag": "0.1.0"
},
"platforms": {
"ios": "8.0"
},
"frameworks": [
"CoreText",
"SystemConfiguration",
"AVFoundation",
"CoreTelephony",
"AudioToolbox",
"CoreMedia",
"VideoToolbox"
],
"libraries": [
"sqlite3.0",
"z",
"c++"
],
"default_subspecs": "Lite",
"subspecs": [
{
"name": "Full",
"source_files": "GGJ_NIMKit/NIMKit/**/*.{h,m}",
"dependencies": {
"NIMKit/Core": [

],
"NIMSDK": [
"~> 6.2.0"
]
}
},
{
"name": "Lite",
"source_files": "GGJ_NIMKit/NIMKit/**/*.{h,m}",
"dependencies": {
"NIMKit/Core": [

],
"NIMSDK_LITE": [
"~> 6.2.0"
]
}
},
{
"name": "Core",
"resources": "GGJ_NIMKit/Resources/*.*",
"dependencies": {
"SDWebImage": [
"~> 4.4.5"
],
"Toast": [
"~> 3.0"
],
"M80AttributedLabel": [
"~> 1.6.3"
],
"TZImagePickerController": [
"~> 3.0.7"
]
}
}
]
}
