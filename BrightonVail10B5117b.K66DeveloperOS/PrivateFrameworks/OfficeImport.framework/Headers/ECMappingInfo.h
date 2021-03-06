/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ECMappingInfo : NSObject {
	NSString *mSheetName;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int columnOffset;	// G=0x34c0145d; 
@property(readonly, assign, nonatomic) int rowOffset;	// G=0x34c01459; 
@property(readonly, assign, nonatomic) NSString *sheetName;	// G=0x34c01461; @synthesize=mSheetName
+ (id)mappingInfoWithSheetName:(id)sheetName;	// 0x34c013c1
- (id)initWithSheetName:(id)sheetName;	// 0x34c0136d
// declared property getter: - (int)columnOffset;	// 0x34c0145d
- (void)dealloc;	// 0x34c0140d
// declared property getter: - (int)rowOffset;	// 0x34c01459
// declared property getter: - (id)sheetName;	// 0x34c01461
@end

