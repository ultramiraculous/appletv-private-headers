/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OCDReader, OCDSummary, OADBlipCollection;
@protocol OCDWriter;

@interface OCDDocument : NSObject {
	OCDReader *mReader;	// 4 = 0x4
	id<OCDWriter> mWriter;	// 8 = 0x8
	OCDSummary *mSummary;	// 12 = 0xc
	OADBlipCollection *mBlips;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) OADBlipCollection *blips;	// G=0x349f4101; @synthesize=mBlips
@property(retain, nonatomic) OCDReader *reader;	// G=0x34c3d621; S=0x349e0d75; @synthesize=mReader
@property(readonly, assign, nonatomic) OCDSummary *summary;	// G=0x34a627bd; @synthesize=mSummary
@property(retain, nonatomic) id<OCDWriter> writer;	// G=0x34c3d631; S=0x34c3d641; @synthesize=mWriter
- (id)init;	// 0x349df8b5
// declared property getter: - (id)blips;	// 0x349f4101
- (void)dealloc;	// 0x34a663bd
- (bool)isFromBinaryFile;	// 0x34c3d5d9
- (bool)isToBinaryFile;	// 0x34c3d5fd
// declared property getter: - (id)reader;	// 0x34c3d621
// declared property setter: - (void)setReader:(id)reader;	// 0x349e0d75
// declared property setter: - (void)setWriter:(id)writer;	// 0x34c3d641
// declared property getter: - (id)summary;	// 0x34a627bd
// declared property getter: - (id)writer;	// 0x34c3d631
@end

