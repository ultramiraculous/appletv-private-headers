/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODIHorizonalList3.h"
#import "OfficeImport-Structs.h"

@class NSString;

@interface ODITitlePoint : ODIHorizonalList3 {
	NSString *mTitlePointPresentationName;	// 12 = 0xc
}
- (id)initWithTitlePointPresentationName:(id)titlePointPresentationName state:(id)state;	// 0x34cc8cf9
- (void)dealloc;	// 0x34cc8d51
- (void)mapBaseStyleFromPoint:(id)point shape:(id)shape;	// 0x34cc8e99
- (void)mapOnePillarStyleFromPoint:(id)point shape:(id)shape;	// 0x34cc8e09
- (void)mapRoofStyleFromPoint:(id)point shape:(id)shape;	// 0x34cc8d9d
@end

