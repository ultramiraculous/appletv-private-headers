/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVGetToFile : DAVRequest {
}
+ (id)getRequestWithSession:(id)session URI:(id)uri toFileHandle:(id)fileHandle;	// 0x32da122d
+ (id)getRequestWithSession:(id)session path:(id)path toFileHandle:(id)fileHandle;	// 0x32da1271
+ (id)getRequestWithURL:(id)url toFileHandle:(id)fileHandle;	// 0x32da12b5
- (id)initGetWithSession:(id)session URI:(id)uri toFileHandle:(id)fileHandle;	// 0x32da12ed
- (id)initGetWithSession:(id)session path:(id)path toFileHandle:(id)fileHandle;	// 0x32da1389
- (id)initGetWithURL:(id)url toFileHandle:(id)fileHandle;	// 0x32da1425
@end
