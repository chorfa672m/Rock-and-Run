//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"



/**
 
 Specifies how to return the result list for My eBay features such as saved
 searches, favorite sellers, and second chance offers.
 
 
 @ingroup Trading
*/
@interface Trading_MyeBaySelectionType : NSObject <EbayNs_Bindable> {

@private
    NSNumber *include;
    NSString *sort;
    NSNumber *maxResults;
    NSString *userDefinedListName;
    NSNumber *includeListContents;

}


/**
 
 Specifies whether or not to include the container in the response.
 Set the value to true to return the default set of fields for the
 container. Not needed if you set a value for at least one other field
 in the container.
 <br><br>
 If you set DetailLevel to ReturnAll, set Include to false to exclude
 the container from the response.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *include;

/**
 
 Specifies the sort order of the result. Default is Ascending.
 
 
 type: string constant in Trading_SortOrderCodeType.h
*/
@property (nonatomic, retain) NSString *sort;

/**
 
 Specifies the maximum number of items in the returned list.
 If not specified, returns all items in the list.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *maxResults;

/**
 
 Specifies that only the user defined list whose name matches 
 the given name should be in the returned list.  If the user does 
 not have a matching record, no data is returned.  If this 
 element is omitted, the information for all records is returned.
 For use only within the UserDefinedLists element.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *userDefinedListName;

/**
 
 Specify true to return the full user defined list contents in 
 the response's UserDefinedList containers.  A value of 
 false means only a summary of the user defined list will be 
 returned.  The default value is false.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *includeListContents;



@end
