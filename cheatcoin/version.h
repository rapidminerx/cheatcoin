/* version and history */

#ifndef CHEATCOIN_VERSION_H
#define CHEATCOIN_VERSION_H

#define CHEATCOIN_VERSION "T13.654-T13.761" /* $DVS:time$ */

/* история

T13.761 сделан быстрый механизм перебора хешей в майнере, дающий выгоду x2-x3

T13.760 добавлен вывод своего и обзего хешрейта сети за прошедший час

T13.759 Linux: при падении в лог добавляется стек вызовов, программа компилируется 
	с NDEBUG, отключены fifo-мьютексы dthread

T13.753 увеличен период, за котоырй запрашиваются все блоки, сделана версия для win64

T13.748 добавлен код, позволяющий избежать падений из-за отключения соединений

T13.744 исправлена ошибка в алгоритме майнинга

T13.742 улучшение алгоритма синхронизации, улучшение алгоритма майнинга,
	теперь команда net hosts будет выводить версии cheatcoin, а не dnet

T13.740 код для Windows и Linux объединён, новый алгоритм синхронизации хостов

T13.734 иправлена ошибка с неверным определением позиции в файле при записи блока;
	при ответе на зпаросов блока за период в минуту не создаётся новый поток;
	программа завершается, если нет базы данных хостов

T13.726 исправлена ошибка, когда вновь созданный блок отвергается; сделана команда
	terminate для завершения демона

T13.720 добавлены генерация новых ключей и транзакции с разными ключами, README.md

T13.718 исправлены ошибки, связанные с размножением пакетов в сети

T13.716 сделана база данных хостов

T13.714 изменён механизм синхронизации между хостами с использованием контрольных сумм,
	сделана команда net ... для вызова команды транспортного уровня

T13.707 расширен набор команд, сделаны переводы на данный адрес

T13.706 сделано включение неглавных блоков в общую сеть

T13.702 изменён алгоритм назначения главных блоков (блоки из цепи с наибольшей
	суммарной сложностью), доделаны применение и откатка транзакций

T13.696 скорость синхронизации устанавливается пропорционально доле неизвестных главных
	блоков; добавлены уровни логирования и их интерактивное изменение

T13.695 хранилище сделано в виде структуры каталогов; добавлена опция -i,
	позволяющая запустить программу в качестве терминала к работающему демону

T13.693 исправлена ошибка в storage; запущена тестовая сеть

T13.692 изменён алгоритм отпределения главного блока, добавлены адреса в формате base64

T13.690 криптография отлажена

T13.682 добавлено кодирование ECDSA и кошелёк wallet.dat

T13.673 работающая версия на сети из двух хостов

T13.672 первая рабочая версия: интерактивное меню, майнинг, хеш, лог-файл,
	сохранение блоков в файл и обмен между хостами

T13.654	начало проекта

*/

#endif
