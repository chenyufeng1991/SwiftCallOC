//
//  OCWebService.h
//  SwiftCallOCWebService
//
//  Created by chenyufeng on 15/8/7.
//  Copyright (c) 2015年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//需要有两个Delegate，一个是解析XML用的，一个是网络连接用的；
@interface OCWebService : NSObject<NSXMLParserDelegate, NSURLConnectionDelegate>

@property (strong, nonatomic) NSMutableData *webData;
@property (strong, nonatomic) NSMutableString *soapResults;
@property (strong, nonatomic) NSXMLParser *xmlParser;
@property (nonatomic) BOOL elementFound;
@property (strong, nonatomic) NSString *matchingElement;
@property (strong, nonatomic) NSURLConnection *conn;

-(void)query:(NSString*)phoneNumber;//在头文件中声明查询方法；

@end
