//
//  ViewController.m
//  DemoCommonDefine
//
//  Created by zhangshaoyu on 16/6/8.
//  Copyright © 2016年 zhangshaoyu. All rights reserved.
//

#import "ViewController.h"
#import "Common_define.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.title = @"常用宏定义";
    
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(10.0, 80.0, (kScreenWidth - 10.0 * 2), 30.0)];
    [self.view addSubview:label];
    NSString *text = kVeridateChecking;
    text = [NSString stringWithFormat:@"device %@, system %@", (isIPAD ?  @"iPad" : (isIPHONE6P ? @"iphone6P" : (isIPHONE6 ? @"iPhone6" : (isIPHONE5 ? @"iPhone5" : @"iPhone4")))), @(GetSystemVersion)];
    label.text = text;
    label.textColor = UIColorRGB_Alpha(100.0, 100.0, 20.0, 1.0);
    label.backgroundColor = UIColorHex_Alpha(0x123651, 0.5);
    
    UIImageView *imageview = [[UIImageView alloc] initWithFrame:CGRectMake(10.0, 130.0, 80.0, 80.0)];
    [self.view addSubview:imageview];
//    UIImage *image = kImageWithName(@"image");
//    UIImage *image = kImageFromBundleName(@"image.png");
    UIImage *image = kImageFromBundleNameType(@"image", @"png");
    imageview.image = image;

    
    
    NSString *imagePath = GetFilePathFromBundleNameType(@"image", @"png");
    NSLog(@"imagePath=%@", imagePath);
    
    NSLog(@"home=%@", GetFilePathHome);
    NSLog(@"document=%@", GetFilePathDocument);
    NSLog(@"library=%@", GetFilePathLibrary);
    NSLog(@"cache=%@", GetFilePathCache);
    NSLog(@"temp=%@", GetFilePathTemp);
    
    NSLog(@"home=%@", GetFilePathHomeWithName(@"001"));
    NSLog(@"document=%@", GetFilePathDocumentWithName(@"001.txt"));
    NSLog(@"library=%@", GetFilePathLibraryWithName(@"002"));
    NSLog(@"cache=%@", GetFilePathCacheWithName(@"003.rar"));
    NSLog(@"temp=%@", GetFilePathTempWithName(@"004"));

    
    NSLog(@"当前语言=%@", GetAppLanguage);
    NSLog(@"名称=%@", GetAppName);
    NSLog(@"bundle名称=%@", GetAppBundleName);
    NSLog(@"标识=%@", GetAppIdentifier);
    NSLog(@"当前版本号=%@", GetAppCurrentVersion);
    NSLog(@"build版本号=%@n", GetAppCurrentBuildVersion);
    NSLog(@"支持的最小版本号=%@",GetAppMiniSystemVersion);
    NSLog(@"当前设备版本号=%@", GetAppCurrentPlatformVersion);
    
    
    NSLog(@"手机序列号: %@", GetDeviceIdentifier);
    NSLog(@"手机别名: %@", GetDeviceName);
    NSLog(@"设备名称: %@", GetDeviceSystemName);
    NSLog(@"手机系统版本: %@", @(GetSystemVersion));
    NSLog(@"手机型号: %@", GetDeviceModel);
    NSLog(@"国际化区域名称: %@", GetDeviceLocalModel);
    NSLog(@"电池电量: %@", @(GetDeviceBatteryLevel));
    NSLog(@"电池状态: %@", @(GetDeviceBatteryState));
    
    NSDictionary *dict = [[NSBundle mainBundle] infoDictionary];
    NSLog(@"dict = %@", dict);
    NSString *platformName = [dict objectForKey:@"DTPlatformName"];
    NSLog(@"platformName = %@", platformName);
    NSString *platformVersion = [dict objectForKey:@"DTPlatformVersion"];
    NSLog(@"platformVersion = %@", platformVersion);
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
