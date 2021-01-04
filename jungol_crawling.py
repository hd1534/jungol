# https://selenium-python.readthedocs.io/
# https://www.selenium.dev/documentation/en/getting_started/

from selenium import webdriver
 
driver = webdriver.Firefox(executable_path="./geckodriver")
 
driver.get("http://www.jungol.co.kr/bbs/board.php?bo_table=pbank")  

main_categories_dic = []


main_categories = driver.find_element_by_class_name("lnb").find_elements_by_tag_name("li")
for main_category in main_categories:
    url = main_category.find_element_by_tag_name("a").get_attribute("href")
    main_category_name = main_category.find_element_by_tag_name("a").text
    
    if "문제은행" in main_category_name:
        continue

    main_categories_dic.append({"url": url, "name": main_category_name})
    

for main_category in main_categories_dic:
    print("")
    print(main_category['name'] + " : " + url)
    driver.get(main_category['url'])

    categories = driver.find_element_by_class_name("taps").find_element_by_tag_name("ul").find_elements_by_tag_name("li")
    for category in categories:
        url = category.find_element_by_tag_name("a").get_attribute("href")
        category_name = category.find_element_by_tag_name("a").text

        if "전체" in category_name:
            continue

        print(category_name + " : " + url)


        





# body = driver.find_element_by_tag_name("body")
# body.screenshot("./{}.png".format("screen"))


driver.quit()