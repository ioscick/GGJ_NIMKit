Pod::Spec.new do |s|
s.name = 'GGJ_NIMKit'
s.version = '0.2.0'
s.summary = 'Netease IM UI Kit'
s.homepage = 'https://github.com/ioscick'
s.authors = 'shenliping'
s.source  = { :git => 'https://github.com/ioscick/GGJ_NIMKit', :tag => '0.2.0'}
s.platform = :ios, '8.0'
s.frameworks = 'CoreText', 'SystemConfiguration', 'AVFoundation', 'CoreTelephony', 'AudioToolbox', 'CoreMedia' , 'VideoToolbox'
s.libraries  = 'sqlite3.0', 'z', 'c++'
s.subspec 'Full' do |cs|
cs.source_files = 'GGJ_NIMKit/NIMKit/**/*.{h,m}'
cs.dependency 'GGJ_NIMKit/Core'
cs.dependency 'NIMSDK', '~> 6.2.0'
end

s.subspec 'Lite' do |cs|
cs.source_files = 'GGJ_NIMKit/NIMKit/**/*.{h,m}'
cs.dependency 'GGJ_NIMKit/Core'
cs.dependency 'NIMSDK_LITE', '~> 6.2.0'
end

s.subspec 'Core' do |os|
os.resources = 'GGJ_NIMKit/Resources/*.*'
os.dependency 'SDWebImage', '~> 4.4.5'
os.dependency 'Toast', '~> 3.0'
os.dependency 'M80AttributedLabel', '~> 1.6.3'
os.dependency 'TZImagePickerController', '~> 3.0.7'
end

s.default_subspec = 'Lite'

end
