//
//  BaseRequest.h
//  FenghuangFM
//
//  Created by tom555cat on 2016/11/14.
//  Copyright © 2016年 Hello World Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, HTTPType) {
    HTTPTypeGET,
    HTTPTypePOST,
};


typedef void(^HTTPRequestCompletion)(id responseObject, NSString *message, BOOL success);

@interface BaseRequest : NSObject

/**
 *  设置请求地址
 */
+ (instancetype)requestWithURL:(NSString *)url;

/**
 *  发送网络请求
 *  @param methodType 请求方式 GET POST
 *  @param params     传入参数
 *  @param completion 完成请求回调
 */
- (NSURLSessionDataTask *)startWithMethod:(HTTPType)methodType
                                   params:(id)params
                               completion:(HTTPRequestCompletion)completion;

@end
