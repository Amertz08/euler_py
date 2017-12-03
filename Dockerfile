FROM python:3.6

COPY . /usr/src/euler
WORKDIR /usr/src/euler
RUN pip install .

CMD bash
