/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSIndexPath, NSDate;

__attribute__((visibility("hidden")))
@interface ATVFeedInitialSelectionElement : ATVFeedElement {
	NSDate *_relevanceDate;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int batch;	// G=0x1422d9; 
@property(retain, nonatomic) NSIndexPath *indexPath;	// G=0x142219; S=0x142229; @synthesize=_indexPath
@property(readonly, assign, nonatomic) int photo;	// G=0x142329; 
@property(retain, nonatomic) NSDate *relevanceDate;	// G=0x1421f9; S=0x142209; @synthesize=_relevanceDate
@property(readonly, assign, nonatomic) int row;	// G=0x142289; 
@property(readonly, assign, nonatomic) int section;	// G=0x142239; 
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x141f01
// declared property getter: - (int)batch;	// 0x1422d9
- (void)dealloc;	// 0x142195
// declared property getter: - (id)indexPath;	// 0x142219
// declared property getter: - (int)photo;	// 0x142329
// declared property getter: - (id)relevanceDate;	// 0x1421f9
// declared property getter: - (int)row;	// 0x142289
// declared property getter: - (int)section;	// 0x142239
// declared property setter: - (void)setIndexPath:(id)path;	// 0x142229
// declared property setter: - (void)setRelevanceDate:(id)date;	// 0x142209
@end

