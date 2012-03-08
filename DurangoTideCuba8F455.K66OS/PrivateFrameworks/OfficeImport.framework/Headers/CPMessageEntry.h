/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CPMessageEntry : NSObject {
@private
	int m_timeStamp;	// 4 = 0x4
	int m_tag;	// 8 = 0x8
	NSString *m_text;	// 12 = 0xc
	NSArray *m_parameters;	// 16 = 0x10
	NSMutableArray *m_affectedObjects;	// 20 = 0x14
	int m_count;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *affectedObjects;	// G=0x32d865f1; converted property
@property(assign, nonatomic) int timeStamp;	// G=0x32d86635; S=0x32d86645; @synthesize=m_timeStamp
+ (void)initialize;	// 0x32c143a9
- (id)initWithTag:(int)tag affectedObject:(id)object text:(id)text parameters:(void *)parameters;	// 0x32c143f9
- (void)addAffectedObject:(id)object;	// 0x32c145c9
// converted property getter: - (id)affectedObjects;	// 0x32d865f1
- (void)dealloc;	// 0x32c14671
- (id)description;	// 0x32d86735
- (int)getCount;	// 0x32d86601
- (int)getMessageTag;	// 0x32d865d1
- (id)getMessageText;	// 0x32d865e1
- (id)getParameter:(unsigned)parameter;	// 0x32d86799
- (int)getParameterCount;	// 0x32d867e1
- (unsigned)hash;	// 0x32d86801
- (BOOL)isEqual:(id)equal;	// 0x32d86831
- (void)logWithCat:(id)cat;	// 0x32d86631
- (void)mergeEntries:(id)entries;	// 0x32d86685
// declared property setter: - (void)setTimeStamp:(int)stamp;	// 0x32d86645
// declared property getter: - (int)timeStamp;	// 0x32d86635
- (int)timeStampCompare:(id)compare;	// 0x32d86611
@end
