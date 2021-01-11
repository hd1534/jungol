# https://selenium-python.readthedocs.io/
# https://www.selenium.dev/documentation/en/getting_started/

from selenium import webdriver
import os

def mkdir(path):
    try:
        os.mkdir(path)
    except FileExistsError:
        pass
 
driver = webdriver.Firefox(executable_path="./geckodriver")
driver2 = webdriver.Firefox(executable_path="./geckodriver")
driver3 = webdriver.Firefox(executable_path="./geckodriver")
driver4 = webdriver.Firefox(executable_path="./geckodriver")


driver.get("http://www.jungol.co.kr/bbs/board.php?bo_table=pbank")  

main_categories = driver.find_element_by_class_name("lnb").find_elements_by_tag_name("li")
for main_category in main_categories:  #메인 카테고리 긁기
    main_category_url = main_category.find_element_by_tag_name("a").get_attribute("href")
    main_category_name = main_category.find_element_by_tag_name("a").text
    
    if "문제은행" in main_category_name:
        continue

    print("\n{} : {}".format(main_category_name, main_category_url))
    mkdir("./{}".format(main_category_name))


    driver2.get(main_category_url)

    categories = driver2.find_element_by_class_name("taps").find_element_by_tag_name("ul").find_elements_by_tag_name("li")
    for category in categories:  #카테고리 긁기
        category_url = category.find_element_by_tag_name("a").get_attribute("href")
        category_name = category.find_element_by_tag_name("a").text

        if "전체" in category_name:
            continue

        print("    {} : {}".format(category_name, category_url))
        mkdir("./{}/{}".format(main_category_name, category_name))


        driver3.get(category_url)
         
        page_list = driver3.find_element_by_tag_name("tbody").find_elements_by_tag_name("tr")
        for page in page_list:
            page = page.find_element_by_class_name("ta_left")
            page_name = page.find_element_by_tag_name("div").text.replace(':', ' ').replace('/', ',').replace('.', '')
            page_url = page.find_element_by_tag_name("a").get_attribute("href")

            print("        {} : {}".format(page_name, page_url))
            mkdir("./{}/{}/{}".format(main_category_name, category_name, page_name))


            if not os.path.exists("./{}/{}/{}/{}_sol.c".format(main_category_name, category_name, page_name, page_name)):
                f = open("./{}/{}/{}/{}_sol.c".format(main_category_name, category_name, page_name, page_name), "w")
                f.write('#include<stdio.h>\n\nint main(int argc, char *argv[]) {\n    printf("%d, %s",argc, argv[0]);\n    return 0;\n}')
                f.close

            if not os.path.exists("./{}/{}/{}/{} 문제.png".format(main_category_name, category_name, page_name, page_name)):
                driver4.get(page_url)
                body = driver4.find_element_by_tag_name("body")
                body.screenshot("./{}/{}/{}/{} 문제.png".format(main_category_name, category_name, page_name, page_name))

            if not os.path.exists("./{}/{}/{}/README.md".format(main_category_name, category_name, page_name)):
                f = open("./{}/{}/{}/README.md".format(main_category_name, category_name, page_name), "w", encoding="utf-8")
                f.write('<p align="center"><img src="{} 문제.png" title="문제"></p>'.format(page_name))
                f.close

driver.quit()
driver2.quit()
driver3.quit()
driver4.quit()