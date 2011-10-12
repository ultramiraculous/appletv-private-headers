/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OCDSummary, OADBlipCollection;
@protocol OCDWriter, OCDReader;

__attribute__((visibility("hidden")))
@interface OCDDocument : NSObject {
@private
	id<OCDReader> mReader;	// 4 = 0x4
	id<OCDWriter> mWriter;	// 8 = 0x8
	OCDSummary *mSummary;	// 12 = 0xc
	OADBlipCollection *mBlips;	// 16 = 0x10
}
@property(retain) id reader;	// G=0x357aa441; S=0x3558ca39; converted property
@property(retain) id writer;	// G=0x357aa451; S=0x357aa461; converted property
- (id)init;	// 0x3558bb9d
- (id)blips;	// 0x3559e329
- (void)dealloc;	// 0x355704c5
- (bool)isFromBinaryFile;	// 0x357aa4cd
- (bool)isToBinaryFile;	// 0x357aa4a9
// converted property getter: - (id)reader;	// 0x357aa441
// converted property setter: - (void)setReader:(id)reader;	// 0x3558ca39
// converted property setter: - (void)setWriter:(id)writer;	// 0x357aa461
- (id)summary;	// 0x355e0bfd
// converted property getter: - (id)writer;	// 0x357aa451
@end

