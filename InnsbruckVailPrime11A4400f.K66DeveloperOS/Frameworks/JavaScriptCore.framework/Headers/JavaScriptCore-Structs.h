/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

typedef struct OpaqueJSContext OpaqueJSContext;

typedef struct JSValue *JSValueRef;

template<>
struct Strong<JSC::JSObject> {
	JSValueRef m_slot;
};

typedef struct OpaqueJSValue OpaqueJSValue;

typedef struct CallbackData {
	CallbackData *_field1;
	id _field2;
	id _field3;
	OpaqueJSValue *_field4;
	id _field5;
	unsigned _field6;
	OpaqueJSValue **_field7;
	id _field8;
} CallbackData;

typedef struct CGPoint {
	float _field1;
	float _field2;
} CGPoint;

typedef struct _NSRange {
	unsigned _field1;
	unsigned _field2;
} NSRange;

typedef struct CGSize {
	float _field1;
	float _field2;
} CGSize;

typedef struct CGRect {
	CGPoint _field1;
	CGSize _field2;
} CGRect;

typedef struct OpaqueJSContextGroup OpaqueJSContextGroup;

typedef struct OpaqueJSClass {
	int _field1;
	OpaqueJSClass *_field2;
	OpaqueJSClass *_field3;
	/*function-pointer*/ void *_field4;
	/*function-pointer*/ void *_field5;
	/*function-pointer*/ void *_field6;
	/*function-pointer*/ void *_field7;
	/*function-pointer*/ void *_field8;
	/*function-pointer*/ void *_field9;
	/*function-pointer*/ void *_field10;
	/*function-pointer*/ void *_field11;
	/*function-pointer*/ void *_field12;
	/*function-pointer*/ void *_field13;
	/*function-pointer*/ void *_field14;
	String _field15;
	OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticValueEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<WTF::OwnPtr<StaticValueEntry> > > > _field16;
	OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticFunctionEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<WTF::OwnPtr<StaticFunctionEntry> > > > _field17;
} OpaqueJSClass;

typedef struct StringImpl StringImpl;

template<>
struct RefPtr<WTF::StringImpl> {
	StringImpl *_field1;
};

typedef struct String {
	RefPtr<WTF::StringImpl> _field1;
} String;

template<>
struct HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticValueEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<WTF::OwnPtr<StaticValueEntry> > >;

template<>
struct OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticValueEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<WTF::OwnPtr<StaticValueEntry> > > > {
	HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticValueEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<WTF::OwnPtr<StaticValueEntry> > > *_field1;
};

template<>
struct HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticFunctionEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<WTF::OwnPtr<StaticFunctionEntry> > >;

template<>
struct OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticFunctionEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<WTF::OwnPtr<StaticFunctionEntry> > > > {
	HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticFunctionEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl> >, WTF::HashTraits<WTF::OwnPtr<StaticFunctionEntry> > > *_field1;
};

typedef struct WeakImpl WeakImpl;

template<>
struct Weak<JSC::JSObject> {
	WeakImpl *m_impl;
};

template<>
struct KeyValuePair<id, JSC::Weak<JSC::JSObject> >;

template<>
struct HashTable<id, WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject> > >, WTF::PtrHash<id>, WTF::HashMapValueTraits<WTF::HashTraits<id>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > >, WTF::HashTraits<id> > {
	KeyValuePair<id, JSC::Weak<JSC::JSObject> > *m_table;
	int m_tableSize;
	int m_tableSizeMask;
	int m_keyCount;
	int m_deletedCount;
};

template<>
struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id> > {
	HashTable<id, WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject> > >, WTF::PtrHash<id>, WTF::HashMapValueTraits<WTF::HashTraits<id>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > >, WTF::HashTraits<id> > m_impl;
	int m_gcThreshold;
};

