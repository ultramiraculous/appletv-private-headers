/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray, NSData;

@interface IMXMLParserContext : NSObject {
	NSData *_inContentAsData;	// 4 = 0x4
}
@property(readonly, retain) NSData *inContentAsData;	// G=0x31adc359; @synthesize=_inContentAsData
@property(readonly, retain) NSString *name;	// G=0x31adb935; 
@property(readonly, retain) NSArray *resultsForLogging;	// G=0x31adb941; 
- (id)initWithContent:(id)content;	// 0x31adb9a1
- (id)initWithContentAsData:(id)contentAsData;	// 0x31adc2f9
- (void)dealloc;	// 0x31adc2b1
- (id)inContent;	// 0x31adb955
// declared property getter: - (id)inContentAsData;	// 0x31adc359
// declared property getter: - (id)name;	// 0x31adb935
- (void)reset;	// 0x31adb931
// declared property getter: - (id)resultsForLogging;	// 0x31adb941
@end

