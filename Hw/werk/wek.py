from flask import Flask
from werkzeug.wrappers import Request
from flask import request


app = Flask(__name__)

@app.route('/')
def hello_world():
	
	return 'Hello World'



@app.route('/params/', methods=['GET'])
def get_params(**kwargs):
	

	my_dict  = dict()
	
	
	first_name = request.args.get('marco','')
	for params in request.args.items():
		print(params)


	return  "Hola {} ".format(first_name)
