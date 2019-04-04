//
//  Target_Author.h
//  AFNetworking
//
//  Created by 王史超 on 2019/4/4.
//

#import <Foundation/Foundation.h>
#import "AuthorAPIRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface Target_Author : NSObject

- (UIViewController *)Action_authorDetailViewController:(NSDictionary *)params;

- (NSDictionary *)Action_authorReformerWithOriginData:(NSDictionary *)params;

- (NSDictionary *)Action_authorReformer:(NSDictionary *)params;

- (APIRequest *)Action_authorAPIRequest:(NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
