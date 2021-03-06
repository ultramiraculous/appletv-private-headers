/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ECMappingInfo : NSObject {
@private
	NSString *mSheetName;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int columnOffset;	// G=0x3133c885; 
@property(readonly, assign, nonatomic) int rowOffset;	// G=0x3133c881; 
@property(readonly, assign, nonatomic) NSString *sheetName;	// G=0x3133c889; @synthesize=mSheetName
+ (id)mappingInfoWithSheetName:(id)sheetName;	// 0x3133c8f1
- (id)initWithSheetName:(id)sheetName;	// 0x3133c899
// declared property getter: - (int)columnOffset;	// 0x3133c885
- (void)dealloc;	// 0x3133c93d
// declared property getter: - (int)rowOffset;	// 0x3133c881
// declared property getter: - (id)sheetName;	// 0x3133c889
@end

