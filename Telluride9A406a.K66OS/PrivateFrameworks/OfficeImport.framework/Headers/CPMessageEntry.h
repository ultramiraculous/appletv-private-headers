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
@property(readonly, retain) NSMutableArray *affectedObjects;	// G=0x32ae8851; converted property
@property(assign, nonatomic) int timeStamp;	// G=0x32ae8899; S=0x32ae88a9; @synthesize=m_timeStamp
+ (void)initialize;	// 0x329dbd31
- (id)initWithTag:(int)tag affectedObject:(id)object text:(id)text parameters:(void *)parameters;	// 0x329dbd91
- (void)addAffectedObject:(id)object;	// 0x329dbef5
// converted property getter: - (id)affectedObjects;	// 0x32ae8851
- (void)dealloc;	// 0x329dbfb5
- (id)description;	// 0x32ae9691
- (int)getCount;	// 0x32ae8861
- (int)getMessageTag;	// 0x32ae8831
- (id)getMessageText;	// 0x32ae8841
- (id)getParameter:(unsigned)parameter;	// 0x32ae9705
- (int)getParameterCount;	// 0x32ae974d
- (unsigned)hash;	// 0x32ae976d
- (BOOL)isEqual:(id)equal;	// 0x32ae97a5
- (void)logWithCat:(id)cat;	// 0x32ae8895
- (void)mergeEntries:(id)entries;	// 0x32ae95d5
// declared property setter: - (void)setTimeStamp:(int)stamp;	// 0x32ae88a9
// declared property getter: - (int)timeStamp;	// 0x32ae8899
- (int)timeStampCompare:(id)compare;	// 0x32ae8871
@end
