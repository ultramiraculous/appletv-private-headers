/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSStream.h> // Unknown library


@interface NSStream (NSStream)
@property(assign) id delegate;	// G=0x320a0829; S=0x320a084d; converted property
- (void)close;	// 0x320a0805
// converted property getter: - (id)delegate;	// 0x320a0829
- (void)open;	// 0x320a07e1
- (id)propertyForKey:(id)key;	// 0x320a0871
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x320a08dd
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x320a08b9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x320a084d
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x320a0895
- (id)streamError;	// 0x320a0925
- (unsigned)streamStatus;	// 0x320a0901
@end

@interface NSStream (NSSocketStreamCreationExtensions)
+ (void)getStreamsToHost:(id)host port:(int)port inputStream:(id *)stream outputStream:(id *)stream4;	// 0x320a1359
@end
