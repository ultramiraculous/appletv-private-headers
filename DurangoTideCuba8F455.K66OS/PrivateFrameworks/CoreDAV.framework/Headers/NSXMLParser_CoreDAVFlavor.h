/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAV-Structs.h"


@interface NSXMLParser_CoreDAVFlavor : NSObject {
@private
	id _delegate;	// 4 = 0x4
	id _reserved1;	// 8 = 0x8
	id _reserved2;	// 12 = 0xc
	id _reserved3;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x331954e9; S=0x331954f9; converted property
@property(assign) BOOL shouldAutoreleaseReportedObjects;	// G=0x33195569; S=0x33198089; converted property
@property(assign) BOOL shouldContinueAfterFatalError;	// G=0x33195589; S=0x33198031; converted property
@property(assign) BOOL shouldProcessNamespaces;	// G=0x33195509; S=0x33197fd9; converted property
@property(assign) BOOL shouldReportNamespacePrefixes;	// G=0x33195529; S=0x33198129; converted property
@property(assign) BOOL shouldResolveExternalEntities;	// G=0x33195549; S=0x331980d1; converted property
- (id)initForIterativeParsing;	// 0x33195b3d
- (id)initWithContentsOfURL:(id)url;	// 0x33195b85
- (id)initWithData:(id)data;	// 0x33195c19
- (id)_info;	// 0x331954d9
- (void)_initializeSAX2Callbacks;	// 0x33196399
- (xmlParserCtxt *)_parserContext;	// 0x331955b1
- (void)_popNamespaces;	// 0x3319582d
- (void)_pushNamespaces:(id)namespaces;	// 0x3319594d
- (void)_setParserError:(int)error;	// 0x33195aa5
- (void)abortParsing;	// 0x33196319
- (int)columnNumber;	// 0x33196375
- (void)dealloc;	// 0x3319652d
// converted property getter: - (id)delegate;	// 0x331954e9
- (void)finalize;	// 0x331964b9
- (void)finishIterativeParsing;	// 0x33195ee1
- (int)lineNumber;	// 0x33196351
- (BOOL)parse;	// 0x33195d15
- (BOOL)parseData:(id)data;	// 0x33195f09
- (id)parserError;	// 0x33195b01
- (id)publicID;	// 0x331955a9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x331954f9
// converted property setter: - (void)setShouldAutoreleaseReportedObjects:(BOOL)autoreleaseReportedObjects;	// 0x33198089
// converted property setter: - (void)setShouldContinueAfterFatalError:(BOOL)continueAfterFatalError;	// 0x33198031
// converted property setter: - (void)setShouldProcessNamespaces:(BOOL)processNamespaces;	// 0x33197fd9
// converted property setter: - (void)setShouldReportNamespacePrefixes:(BOOL)reportNamespacePrefixes;	// 0x33198129
// converted property setter: - (void)setShouldResolveExternalEntities:(BOOL)resolveExternalEntities;	// 0x331980d1
// converted property getter: - (BOOL)shouldAutoreleaseReportedObjects;	// 0x33195569
// converted property getter: - (BOOL)shouldContinueAfterFatalError;	// 0x33195589
// converted property getter: - (BOOL)shouldProcessNamespaces;	// 0x33195509
// converted property getter: - (BOOL)shouldReportNamespacePrefixes;	// 0x33195529
// converted property getter: - (BOOL)shouldResolveExternalEntities;	// 0x33195549
- (id)systemID;	// 0x331955ad
@end

