/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EDHeaderFooter : NSObject {
@private
	NSString *mHeaderString;	// 4 = 0x4
	NSString *mFooterString;	// 8 = 0x8
}
@property(retain) id footerString;	// G=0x3122d9a1; S=0x310d26bd; converted property
@property(retain) id headerString;	// G=0x3122d991; S=0x310c7b45; converted property
+ (id)headerFooter;	// 0x3122d949
- (void)dealloc;	// 0x310c4f8d
// converted property getter: - (id)footerString;	// 0x3122d9a1
// converted property getter: - (id)headerString;	// 0x3122d991
// converted property setter: - (void)setFooterString:(id)string;	// 0x310d26bd
// converted property setter: - (void)setHeaderString:(id)string;	// 0x310c7b45
@end
