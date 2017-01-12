/* Generated by RuntimeBrowser.
 */

@protocol IKJSDOMDocument <JSExport>

@required

- (IKDOMNode *)adoptNode:(IKDOMNode *)arg1;
- (IKDOMCDATASection *)createCDATASection:(NSString *)arg1;
- (IKDOMComment *)createComment:(NSString *)arg1;
- (IKDOMDocumentFragment *)createDocumentFragment;
- (IKDOMElement *)createElement:(NSString *)arg1;
- (IKDOMText *)createTextNode:(NSString *)arg1;
- (IKDOMElement *)documentElement;
- (NSString *)documentURI;
- (IKDOMElement *)getElementById:(NSString *)arg1;
- (IKDOMNodeList *)getElementsByTagName:(NSString *)arg1;
- (IKDOMImplementation *)implementation;
- (NSString *)inputEncoding;
- (NSArray *)matchingImpressions:(NSString *)arg1 :(JSValue *)arg2;
- (IKJSNavigationDocument *)navigationDocument;
- (NSArray *)recordedImpressions:(JSValue *)arg1;
- (void)replace:(IKDOMDocument *)arg1;
- (void)runTest:(NSString *)arg1 :(NSDictionary *)arg2;
- (void)scrollToTop;
- (void)setDocumentURI:(NSString *)arg1;
- (void)setNeedsUpdate;
- (void)setStrictErrorChecking:(BOOL)arg1;
- (void)setXmlStandalone:(BOOL)arg1;
- (void)setXmlVersion:(NSString *)arg1;
- (NSArray *)snapshotImpressions;
- (BOOL)strictErrorChecking;
- (NSString *)xmlEncoding;
- (BOOL)xmlStandalone;
- (NSString *)xmlVersion;

@end