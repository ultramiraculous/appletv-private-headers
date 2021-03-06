/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSXMLParser : NSObject {
@private
	void *_parser;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	id _reserved1;	// 12 = 0xc
	id _reserved2;	// 16 = 0x10
	id _reserved3;	// 20 = 0x14
}
@property(assign) id delegate;	// G=0x327ca345; S=0x327ca355; converted property
@property(assign) BOOL shouldContinueAfterFatalError;	// G=0x327ca3c5; S=0x327cc00d; converted property
@property(assign) BOOL shouldProcessNamespaces;	// G=0x327ca365; S=0x327cbf05; converted property
@property(assign) BOOL shouldReportNamespacePrefixes;	// G=0x327ca385; S=0x327cbfb5; converted property
@property(assign) BOOL shouldResolveExternalEntities;	// G=0x327ca3a5; S=0x327cbf5d; converted property
- (id)initWithContentsOfURL:(id)url;	// 0x327ca8cd
- (id)initWithData:(id)data;	// 0x327cab41
- (id)_info;	// 0x327ca335
- (void)_initializeSAX2Callbacks;	// 0x327ca409
- (xmlParserCtxt *)_parserContext;	// 0x327ca3ed
- (void)_popNamespaces;	// 0x327ca5bd
- (void)_pushNamespaces:(id)namespaces;	// 0x327ca6dd
- (void)_setParserError:(int)error;	// 0x327ca835
- (void)abortParsing;	// 0x327caead
- (int)columnNumber;	// 0x327caf09
- (void)dealloc;	// 0x327caf99
// converted property getter: - (id)delegate;	// 0x327ca345
- (void)finalize;	// 0x327caf2d
- (int)lineNumber;	// 0x327caee5
- (BOOL)parse;	// 0x327cac99
- (id)parserError;	// 0x327ca891
- (id)publicID;	// 0x327ca3e5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x327ca355
// converted property setter: - (void)setShouldContinueAfterFatalError:(BOOL)continueAfterFatalError;	// 0x327cc00d
// converted property setter: - (void)setShouldProcessNamespaces:(BOOL)processNamespaces;	// 0x327cbf05
// converted property setter: - (void)setShouldReportNamespacePrefixes:(BOOL)reportNamespacePrefixes;	// 0x327cbfb5
// converted property setter: - (void)setShouldResolveExternalEntities:(BOOL)resolveExternalEntities;	// 0x327cbf5d
// converted property getter: - (BOOL)shouldContinueAfterFatalError;	// 0x327ca3c5
// converted property getter: - (BOOL)shouldProcessNamespaces;	// 0x327ca365
// converted property getter: - (BOOL)shouldReportNamespacePrefixes;	// 0x327ca385
// converted property getter: - (BOOL)shouldResolveExternalEntities;	// 0x327ca3a5
- (id)systemID;	// 0x327ca3e9
@end

