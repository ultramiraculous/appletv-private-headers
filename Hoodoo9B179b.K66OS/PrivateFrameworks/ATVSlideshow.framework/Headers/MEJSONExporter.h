/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSFileHandle;

@interface MEJSONExporter : NSObject {
	NSFileHandle *mOutputFile;	// 4 = 0x4
	int mIndentLevel;	// 8 = 0x8
	int mIndent;	// 12 = 0xc
	BOOL mPrettyPrint;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL prettyPrint;	// G=0x355efe69; S=0x355efe79; @synthesize=mPrettyPrint
- (id)init;	// 0x355ef461
- (void)_appendIndent;	// 0x355efdd1
- (void)_appendNewline;	// 0x355efe35
- (void)_appendString:(id)string;	// 0x355efd91
- (void)_exportArray:(id)array;	// 0x355ef929
- (void)_exportDictionary:(id)dictionary;	// 0x355ef665
- (void)_exportValue:(id)value;	// 0x355efb5d
- (void)dealloc;	// 0x355ef4bd
- (BOOL)exportPropertyList:(id)list toPath:(id)path;	// 0x355ef511
// declared property getter: - (BOOL)prettyPrint;	// 0x355efe69
// declared property setter: - (void)setPrettyPrint:(BOOL)print;	// 0x355efe79
@end
