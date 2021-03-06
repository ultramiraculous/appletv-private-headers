/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVRemoteImageCacher, ATVJSContext, NSString, ATVXMLDocument;

__attribute__((visibility("hidden")))
@interface ATVJSDocumentLoader : XXUnknownSuperclass {
	BOOL _isUsed;	// 4 = 0x4
	ATVJSContext *_context;	// 8 = 0x8
	NSString *_functionName;	// 12 = 0xc
	ATVXMLDocument *_origXMLDocument;	// 16 = 0x10
	ATVXMLDocument *_xmlDocument;	// 20 = 0x14
	id _jsCallback;	// 24 = 0x18
	ATVRemoteImageCacher *_remoteImageCacher;	// 28 = 0x1c
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x17105d; S=0x17106d; @synthesize=_context
@property(copy, nonatomic) NSString *functionName;	// G=0x171095; S=0x1710a9; @synthesize=_functionName
@property(assign, nonatomic) BOOL isUsed;	// G=0x17114d; S=0x17115d; @synthesize=_isUsed
@property(copy, nonatomic) id jsCallback;	// G=0x171129; S=0x17113d; @synthesize=_jsCallback
@property(retain, nonatomic) ATVXMLDocument *origXMLDocument;	// G=0x1710b9; S=0x1710c9; @synthesize=_origXMLDocument
@property(retain, nonatomic) ATVRemoteImageCacher *remoteImageCacher;	// G=0x17116d; S=0x17117d; @synthesize=_remoteImageCacher
@property(retain, nonatomic) ATVXMLDocument *xmlDocument;	// G=0x1710f1; S=0x171101; @synthesize=_xmlDocument
+ (id)documentLoaderForContext:(OpaqueJSContext *)context functionName:(id)name argumentCount:(unsigned long)count arguments:(const OpaqueJSValue **)arguments exception:(const OpaqueJSValue **)exception;	// 0x16ff0d
- (id)initWithContext:(id)context functionName:(id)name xmlDocument:(id)document jsCallback:(id)callback;	// 0x170329
- (void).cxx_destruct;	// 0x1711a5
// declared property getter: - (id)context;	// 0x17105d
// declared property getter: - (id)functionName;	// 0x171095
// declared property getter: - (BOOL)isUsed;	// 0x17114d
// declared property getter: - (id)jsCallback;	// 0x171129
- (void)loadDocumentByReusingJSContext:(BOOL)context completionHandler:(id)handler;	// 0x170451
- (void)loadDocumentViewByReusingJSContext:(BOOL)context completionHandler:(id)handler;	// 0x17096d
// declared property getter: - (id)origXMLDocument;	// 0x1710b9
// declared property getter: - (id)remoteImageCacher;	// 0x17116d
// declared property setter: - (void)setContext:(id)context;	// 0x17106d
// declared property setter: - (void)setFunctionName:(id)name;	// 0x1710a9
// declared property setter: - (void)setIsUsed:(BOOL)used;	// 0x17115d
// declared property setter: - (void)setJsCallback:(id)callback;	// 0x17113d
// declared property setter: - (void)setOrigXMLDocument:(id)document;	// 0x1710c9
// declared property setter: - (void)setRemoteImageCacher:(id)cacher;	// 0x17117d
// declared property setter: - (void)setXmlDocument:(id)document;	// 0x171101
// declared property getter: - (id)xmlDocument;	// 0x1710f1
@end

