/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIImage.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIImageNibPlaceholder : UIImage <NSCoding> {
@private
	NSString *runtimeResourceName;	// 16 = 0x10
}
- (id)initWithCoder:(id)coder;	// 0x3532a8dd
- (id)initWithContentsOfFile:(id)file andRuntimeResourceName:(id)name;	// 0x3532a7e9
- (id)initWithData:(id)data andRuntimeResourceName:(id)name;	// 0x3532a83d
- (void)dealloc;	// 0x3532a891
- (void)encodeWithCoder:(id)coder;	// 0x3532aa59
@end

