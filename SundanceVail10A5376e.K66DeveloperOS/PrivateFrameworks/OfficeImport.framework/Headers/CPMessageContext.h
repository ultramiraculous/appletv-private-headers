/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface CPMessageContext : NSObject {
	NSMutableSet *m_warnings;	// 4 = 0x4
	NSMutableSet *m_errors;	// 8 = 0x8
	NSMutableArray *m_currentObjectStack;	// 12 = 0xc
	NSMutableDictionary *m_placeholderToObjectIdMap;	// 16 = 0x10
}
+ (void)createContextForCurrentThread;	// 0x370f5e55
+ (id)currentObjectOrPlaceholder;	// 0x370bff41
+ (id)getErrorArray;	// 0x370f5fc5
+ (id)getWarningArray;	// 0x370f5f35
+ (void)initialize;	// 0x36ef9281
+ (BOOL)isFileStructuredStorage;	// 0x370f6055
+ (void)popCurrentObject;	// 0x370f6101
+ (void)popCurrentPlaceholder:(id)placeholder;	// 0x370f62a5
+ (void)pushCurrentObject:(id)object;	// 0x370f6065
+ (id)pushCurrentPlaceholder;	// 0x370f61dd
+ (void)removeContextForCurrentThread;	// 0x370f5ee5
+ (void)replacePlaceholdersWithObjects;	// 0x370f6395
+ (void)reportError:(CPTaggedMessageStructure *)error;	// 0x370f5b4d
+ (void)reportErrorException:(id)exception;	// 0x370f5dc1
+ (void)reportObject:(id)object withWarning:(CPTaggedMessageStructure *)warning;	// 0x370f5ad9
+ (void)reportObjectOrPlaceholder:(id)placeholder withWarning:(CPTaggedMessageStructure *)warning parameters:(void *)parameters;	// 0x370c0069
+ (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x370bfeb1
+ (void)reportWarningException:(id)exception;	// 0x370f5c1d
+ (void)restoreObjectStack:(unsigned)stack;	// 0x370f6631
+ (unsigned)saveObjectStack;	// 0x370f65bd
+ (void)setIsFileStructuredStorage:(BOOL)storage;	// 0x3705305d
+ (void)setObject:(id)object forPlaceholder:(id)placeholder;	// 0x370f6391
- (id)init;	// 0x370f5919
- (void)dealloc;	// 0x370f5a4d
@end

