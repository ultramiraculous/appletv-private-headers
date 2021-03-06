/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSStream.h> // Unknown library


@interface NSStream (NSStream)
@property(assign) id delegate;	// G=0x31d89819; S=0x31d8983d; converted property
- (void)close;	// 0x31d897f5
// converted property getter: - (id)delegate;	// 0x31d89819
- (void)open;	// 0x31d897d1
- (id)propertyForKey:(id)key;	// 0x31d89861
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x31d898cd
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x31d898a9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31d8983d
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x31d89885
- (id)streamError;	// 0x31d89915
- (unsigned)streamStatus;	// 0x31d898f1
@end

@interface NSStream (NSSocketStreamCreationExtensions)
+ (void)getStreamsToHost:(id)host port:(int)port inputStream:(id *)stream outputStream:(id *)stream4;	// 0x31d8a349
@end

