/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSSet, NSString;
@protocol CoreDAVContainerQueryTaskDelegate;

@interface CoreDAVContainerQueryTask : CoreDAVTask {
	NSSet *_searchTerms;	// 120 = 0x78
	unsigned _searchLimit;	// 124 = 0x7c
	NSString *_appSpecificNamespace;	// 128 = 0x80
	NSString *_appSpecificQueryCommand;	// 132 = 0x84
	NSString *_appSpecificDataProp;	// 136 = 0x88
	Class _appSpecificDataItemClass;	// 140 = 0x8c
}
@property(assign, nonatomic) id<CoreDAVContainerQueryTaskDelegate> delegate;	// @dynamic
+ (id)_copySearchTermsFromSearchString:(id)searchString;	// 0x34798955
- (id)initWithSearchString:(id)searchString searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;	// 0x34798cad
- (id)initWithSearchTerms:(id)searchTerms searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;	// 0x34798ca9
- (id)_initWithSearchTerms:(id)searchTerms searchLimit:(unsigned)limit atURL:(id)url appSpecificDataItemClass:(Class)aClass;	// 0x34798d0d
- (void)addFiltersToXMLData:(id)xmldata;	// 0x34798e2d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x34798fdd
- (void)dealloc;	// 0x34798dd5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x347991b9
- (id)httpMethod;	// 0x34798e21
- (id)requestBody;	// 0x34798e71
@end
