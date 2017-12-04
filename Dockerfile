FROM python:3.6

RUN pip install \
    pytest==3.3.0

COPY . /usr/src/euler
WORKDIR /usr/src/euler
RUN pip install .

CMD pytest
