/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library


@interface PCLogging : NSObject {
}
+ (void)_appendString:(id)string toFileNamed:(id)fileNamed;	// 0x34668e15
+ (id)_stringWithCurrentTime;	// 0x346690e5
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0x34668bb5
+ (void)enableFileLogging:(BOOL)logging;	// 0x34668bc9
+ (void)enableLoggingForCustomHandler:(id)customHandler;	// 0x34668ce5
+ (void)initialize;	// 0x34669571
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format;	// 0x34669549
+ (void)logAtLevel:(int)level delegate:(id)delegate format:(id)format arguments:(void *)arguments;	// 0x3466916d
+ (id)logFileDirectory;	// 0x34669141
+ (void)logKeepAliveInterval:(double)interval forServiceIdentifier:(id)serviceIdentifier;	// 0x34668bdd
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0x34668b91
@end

